// Marketplace.

#include <iostream>

using namespace std;

class Product
{
protected:
    string name;
    double price;

public:
    Product(string name, double price)
    {
        this->name = name;
        this->price = price;
    }

    // getters.
    string getName();
    double getPrice();

    // setters.
    void setName(string name);
    void setPrice(double price);

    void print()
    {
        cout << "Product name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

class DiscoutProduct : public Product
{
    typedef Product super;
    double discount;

public:
    DiscoutProduct(string name, double price, double discount) : Product(name, price)
    {
        this->discount = discount;
    }

    // Overriding super's getter.
    // Since this class doesn't treat discounted price as member variable, no need to override super's setter.
    // Discounted price is only treated by member function getPrice().
    double getPrice()
    {
        double discounted = (100.0 - discount) / 100.0 * price;
        return discounted;
    }

    // Overriding super's print() to provide produt's original price and discounted price.
    void print()
    {
        Product::print();
        cout << "Discounted Price(Discout Rate): " << getPrice() << "(" << discount << "%)\n";
    }
};

int main(void)
{
    // 1. Test class Product.
    Product mostWantedProduct("Galaxy Fold 3", 2499.99);
    mostWantedProduct.print();

    cout << endl;

    // 2. Test class DiscoutProduct.
    DiscoutProduct mostWantedProductDiscounted("Galaxy Fold 3", 2499.99, 80.0);
    mostWantedProductDiscounted.print();

    cout << endl;

    // 3. Test down casting.
    Product* p1 = new Product("toothbrush", 3000);
    Product* p2 = new DiscoutProduct("toothbrush", 3000, 15);
    cout << p1->getPrice() << endl;
    cout << p2->getPrice() << endl;
    cout << ((DiscoutProduct*)p2)->getPrice() << endl;

    delete p1, p2;

    return 0;
}

// getters.
// Product getters:
string Product::getName()
{
    return name;
}

double Product::getPrice()
{
    return price;
}

// setters.
// Product setters:
void Product::setName(string name)
{
    this->name = name;
}

void Product::setPrice(double price)
{
    this->price = price;
}