#include <iostream>
#include <cmath>

template <typename T>
class Circle
{
public:
	Circle(T r) : radius(r) {}
	~Circle() {}
	T area() { return m_pi*radius*radius; }
	T perimeter() { return ; }
private:
	T radius;
};

int main()
{
	Circle<double> c(5);
	double a = c.area();
	std::cout << a << std::endl;
	return 0;
}