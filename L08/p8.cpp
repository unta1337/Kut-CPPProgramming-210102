// Bank account.

#include <iostream>

class BankAccount
{
    int accountNumber;
    std::string owner;
    int balance;

    public:
        BankAccount(int accountNumber_, std::string owner_, int balance_)
        {
            accountNumber = accountNumber_;
            owner = owner_;
            balance = balance_;
        }

        // Use pointer to mod original object.
        int transfer(int amount, BankAccount *otherAccount)
        {
            withdraw(amount);
            otherAccount->deposit(amount);

            return amount;
        }

        void setBalance(int amount)
        {
            balance = amount;
        }

        int getBalance()
        {
            return balance;
        }

        void deposit(int amount)
        {
            balance += amount;
        }

        void withdraw(int amount)
        {
            balance -= amount;
        }

        void print()
        {
            std::cout << "[" << owner << "] Your balance: " << balance << "\n";
        }
};

int main(void)
{
    BankAccount b1(1, "name1", 1000);
    BankAccount b2(1, "name2", 0);

    b1.print();
    b2.print();

    b1.transfer(1000, &b2);
    std::cout << "\n";

    b1.print();
    b2.print();

    return 0;
}