//#define W101

#ifdef W101

#include <iostream>

struct Vector2D
{
	int x;
	int y;

	Vector2D()
	{
		x = 0;
		y = 0;
	}

	Vector2D(int x_, int y_)
	{
		x = x_;
		y = y_;
	}

	void print(bool line = false)
	{
		std::cout << "(" << x << ", " << y << ")";
		if (line)
			std::cout << "\n";
	}
};

class Shape
{
protected:
	Vector2D position;

public:
	Shape()
	{
		//std::cout << "This is constructor of class Shape without parameter.\n";
		position.x = 0;
		position.y = 0;
	}

	Shape(int x, int y)
	{
		//std::cout << "This is constructor of class Shape with parameter.\n";
		position.x = x;
		position.y = y;
	}

	~Shape()
	{
		//std::cout << "This is destroyer of class Shape. " << classCount << "\n";
	}

	void print()
	{
		std::cout << "Type: Shape (abstract)" << std::endl;
		std::cout << "Position: "; position.print(true);
	}

	int getArea()
	{
		return 0;
	}
};
class Rectangle : public Shape
{
public:
	// constructors of Shape
	// Vector2D position(int x, int y)
	int width;
	int height;

public:
	Rectangle()
	{
		position.x = 0;
		position.y = 0;
		width = 0;
		height = 0;
	}

	Rectangle(int x, int y, int w, int h) : Shape(x, y), width(w), height(h) { }

	~Rectangle()
	{
		//std::cout << "This is the desrtoyer of class Rectangle. " << "\n";
	}

	void print()
	{
		std::cout << "Type: Rectangle" << std::endl;
		std::cout << "Position:"; position.print(true);
		std::cout << "Width: " << width << std::endl;
		std::cout << "Height: " << height << std::endl;
	}

	int getArea()
	{
		return width * height;
	}

	bool isLarger(Rectangle rect)
	{
		return getArea() > rect.getArea() ? true : false;
	}
};

int main(void)
{
	Shape s1;
	s1.print();
	std::cout << "\n";

	Shape s2(5, 5);
	s2.print();
	std::cout << "\n";

	Rectangle r1;
	r1.print();
	std::cout << "Area: " << r1.getArea() << std::endl;
	std::cout << "\n";

	Rectangle r2(5, 5, 10, 2);
	r2.print();
	std::cout << "Area: " << r2.getArea() << std::endl;
	std::cout << "\n";

	std::cout << "Is r2 larger than r1? (" << r2.isLarger(r1) << ")\n";
	std::cout << "\n";

	return 0;
}

#endif