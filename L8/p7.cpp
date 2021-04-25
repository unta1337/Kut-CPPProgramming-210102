// Triangle.

#include <iostream>

class Triangle
{
    float base;
    float height;
    float area;

    public:
        Triangle(float base_, float height_)
        {
            base = base_;
            height = height_;
            area = base * height * 0.5f;
        }

        float getArea()
        {
            return area;
        }
};

int main(void)
{
    Triangle t(3.14, 2.71);

    std::cout << t.getArea();

    return 0;
}