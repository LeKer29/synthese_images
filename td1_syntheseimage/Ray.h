#pragma once
#include "Vector.h"
class Ray
{
public:
	Ray(const Vector &_origin, const Vector &_direction);
	Vector getOrigin() const;
	Vector getDirection() const;
protected:
	Vector origin;
	Vector direction;
};

