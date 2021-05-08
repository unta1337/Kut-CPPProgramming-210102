// Complex Numbers.

#include <iostream>

class Complex {
    float real, imaginary;
    // Declare member variables as private.

    // Declare member functions as public.
    public:
        Complex(float real_, float imaginary_)
        {
            real = real_;
            imaginary = imaginary_;
        }

        void print()
        {
            std::cout << real << " + " << imaginary << "i\n";
        }

        void add(Complex c)
        {
            real += c.real;
            imaginary += c.imaginary;
        }

        void sub(Complex c)
        {
            real -= c.real;
            imaginary -= c.imaginary;
        }
};

int main(void)
{
    Complex c1(3.14f, 2.71f);
    Complex c2(1.41f, 1.68f);

    c1.print();
    c2.print();
    std::cout << "\n";

    c1.add(c2);
    c1.print();
    std::cout << "\n";

    c1.sub(c2);
    c1.print();
    std::cout << "\n";

    return 0;
}