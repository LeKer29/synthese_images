#pragma once
#include "Color.h"
#include "Ray.h"
class Object3D
{
public:
	Object3D(const Color &_color);
	virtual bool intersects(const Ray& ray) = 0;
protected:
	Color color;

};

