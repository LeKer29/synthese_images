#pragma once
class Vector
{

public:
	Vector(double _x =0, double _y=0, double _z=0);
	Vector operator+(const Vector &vector) const;
	Vector operator*(double scalar) const;
	double dot(const Vector &v) const;
	void normalize();
	double length() const;

	double getX() const;
	double getY() const;
	double getZ() const;
protected:
	double x, y, z;
};
