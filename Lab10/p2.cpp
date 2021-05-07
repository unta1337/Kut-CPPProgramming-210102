// Customer management system via inheritance.

#include <iostream>

class Person
{
protected:
    std::string name;
    std::string adress;
    std::string phoneNumber;

public:
    Person(std::string name_, std::string adress_, std::string phoneNumber_)
    {
        name = name_;
        adress = adress_;
        phoneNumber = phoneNumber_;
    }

    std::string getName()
    {
        return name;
    }

    void setNmae(std::string name_)
    {
        name = name_;
    }

    std::string getAdress()
    {
        return adress;
    }

    void setAdress(std::string adress_)
    {
        adress = adress_;
    }

    std::string getPhoneNumber()
    {
        return phoneNumber;
    }
    
    void setPhoneNumber(std::string phoneNumber_)
    {
        phoneNumber = phoneNumber_;
    }
};

class Customer : public Person
{
    std::string ID;
    int mileage;

public:
    Customer(std::string name_, std::string adress_, std::string phoneNumber_, std::string ID_, int mileage_) : Person(name_, adress_, phoneNumber_)
    {
        ID = ID_;
        mileage = mileage_;
    }
    
    std::string getID()
    {
        return ID;
    }
    
    void setID(std::string ID_)
    {
        ID = ID_;
    }

    int getMileage()
    {
        return mileage;
    }
    
    void setMileage(int mileage_)
    {
        mileage = mileage_;
    }
};

int main(void)
{
    // Declare and initialize p and print its properties via getters.
    Person p("Jane Doe", "Earth", "010");
    std::cout << "Nmae: " << p.getName() << "\n";
    std::cout << "Adress: " << p.getAdress() << "\n";
    std::cout << "Phone Number: " << p.getPhoneNumber() << "\n";

    std::cout << "\n";

    // Modify p's properties via setters.
    p.setNmae("John Doe");
    p.setAdress("His house");
    p.setPhoneNumber("011");
    std::cout << "Nmae: " << p.getName() << "\n";
    std::cout << "Adress: " << p.getAdress() << "\n";
    std::cout << "Phone Number: " << p.getPhoneNumber() << "\n";

    std::cout << "\n";

    // Declare and initialize c the Person and print its properties via getters.
    Customer c ("Jane Doe", "Earth", "010", "001", 0);
    std::cout << "Nmae: " << c.getName() << "\n";
    std::cout << "Adress: " << c.getAdress() << "\n";
    std::cout << "Phone Number: " << c.getPhoneNumber() << "\n";
    std::cout << "ID: " << c.getID() << "\n";
    std::cout << "Mileage: " << c.getMileage() << "\n";

    std::cout << "\n";

    // Modify c's properties via setters.
    c.setNmae("John Doe");
    c.setAdress("His house");
    c.setPhoneNumber("011");
    c.setID("002");
    c.setMileage(1);
    std::cout << "Nmae: " << c.getName() << "\n";
    std::cout << "Adress: " << c.getAdress() << "\n";
    std::cout << "Phone Number: " << c.getPhoneNumber() << "\n";
    std::cout << "ID: " << c.getID() << "\n";
    std::cout << "Mileage: " << c.getMileage() << "\n";

    return 0;
}