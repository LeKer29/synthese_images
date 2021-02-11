#include "Vector.h"
#include "math.h"
Vector::Vector(double _x, double _y, double _z)
	:x(_x),y(_y),z(_z)
{
}

Vector Vector::operator+(const Vector &vector) const
{
	return Vector(x+vector.x,y+vector.y,z+vector.z);
}

Vector Vector::operator*(double scalar) const
{
	return Vector(x*scalar,y*scalar,z*scalar);
}

double Vector::dot(const Vector &v) const
{
	return x*v.x + y*v.y + z*v.z;
}

void Vector::normalize()
{
	double norm = length();
	if (norm > 0)
	{
		x /= norm;
		y /= norm;
		z /= norm;
	}
}

double Vector::length() const
{
	return sqrt(x*x + y*y + z*z);
}

double Vector::getX() const
{
	return x;
}

double Vector::getY() const
{
	return y;
}

double Vector::getZ() const
{
	return z;
}
