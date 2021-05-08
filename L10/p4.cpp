// Foods.

#include <iostream>

class Food
{
public:
    int kcal;
    int price;
    int weight;

    Food(int kcal_, int price_, int weight_) : kcal(kcal_), price(price_), weight(weight_) { }
};

class Melon : public Food
{
public:
    std::string farm;

    Melon(int kcal_, int price_, int weight_, std::string farm_) : Food(kcal_, price_, weight_), farm(farm_) { }
};

int main(void)
{
    Melon m(500, 20000, 2, "farm name");
    std::cout << "kacl: " << m.kcal << "\n";
    std::cout << "price: " << m.price << "\n";
    std::cout << "weight: " << m.weight << "\n";
    std::cout << "farm: " << m.farm << "\n";

    return 0;
}