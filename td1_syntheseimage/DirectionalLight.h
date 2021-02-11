#pragma once
#include "Light.h"
#include "Vector.h"
class DirectionalLight : public Light
{
public:
	DirectionalLight(const Vector &_direction);
protected:
	Vector direction;
};

