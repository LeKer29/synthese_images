#include "Ray.h"

Ray::Ray(const Vector& _origin, const Vector& _direction)
	:origin(_origin), direction(_direction)
{
}

Vector Ray::getOrigin() const
{
	return origin;
}

Vector Ray::getDirection() const
{
	return direction;
}

