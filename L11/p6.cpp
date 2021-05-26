// Paint 3-D objects.

#include <iostream>

// Define PI as a preprocessor constant to handle circle-related shapes.
#define PI 3.141592

using namespace std;

// Shape has name as member variable and getSurfaceArea() as memeber function; getSerFaceArea() is virtual function.
// Since class Shape doesn't have any pointer variables having a manually allocated memory, no need to declare destroyer.
class Shape
{
public:
    string name;

    Shape(string name)
    {
        this->name = name;
    }

    // Declare virtual function to make this class to abstract class.
    virtual double getSurfaceArea() = 0;
};

// Sphere extends Shape and set its name to "Shpere" as default.
class Sphere : public Shape
{
public:
    double radius;

    Sphere(double radius, string name = "Sphere") : Shape(name)
    {
        this->radius = radius;
    }

    virtual double getSurfaceArea()
    {
        double area = 4.0 * PI * radius * radius;
        return area;
    }
};

// Cube extends Shape and set its name to "Cube" as default.
class Cube : public Shape
{
public:
    double width, length, height;

    Cube(double width, double length, double height, string name = "Cube") : Shape(name)
    {
        this->width = width;
        this->length = length;
        this->height = height;
    }

    virtual double getSurfaceArea()
    {
        double term1 = width * length;
        double term2 = length * height;
        double term3 = height * width;
        double area = 2 * (term1 + term2 + term3);
        return area;
    }
};

// Cylinder extends Shape and set its name to "Cylinder" as default.
class Cylinder : public Shape
{
public:
    double radius, height;

    Cylinder(double radius, double height, string name = "Cylinder") : Shape(name)
    {
        this->radius = radius;
        this->height = height;
    }

    virtual double getSurfaceArea()
    {
        double halfCircumference = PI * radius;
        double bottomArea = halfCircumference * radius;
        double sideArea = 2.0 * halfCircumference * height;
        double area = 2 * bottomArea + sideArea;
        return area;
    }
};

int main(void)
{
    Shape* s[3];
    s[0] = new Sphere(1.0);
    s[1] = new Cube(1.0, 2.0, 3.0);
    s[2] = new Cylinder(2.0, 3.0);

    for (int i = 0; i < 3; i++)
        cout << "The area of " << s[i]->name << " is: " << s[i]->getSurfaceArea() << ".\n";

    return 0;
}