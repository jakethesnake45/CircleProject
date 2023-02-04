#include"Circle.h"
#include<cmath>
using namespace std;

const double My_PI = 3.14159;

Circle::Circle()
{
	radius = 1;
}
Circle::Circle(double radius)
{
	this->radius = radius;
}
double Circle::getRadius() const
{
	return radius;
}
void Circle::setRadius(double radius)
{
	this->radius = radius;
}
double Circle::circumference() const
{
	// C = 2 * pi * r
	return 2 * My_PI * radius;
}
double Circle::area() const
{
	// A = pi * r^2
	return My_PI * pow(radius, 2);
}