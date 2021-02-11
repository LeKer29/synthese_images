#pragma once
#include "Object3D.h"
#include "Vector.h"
#include "Ray.h"
class Sphere : public Object3D
{
public:
	Sphere(double _radius, Vector _center,const Color &_color);
	virtual bool intersects(const Ray& ray);
protected:
	double radius;
	Vector center;
};

