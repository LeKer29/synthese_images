#include "Sphere.h"
#include <cmath>

Sphere::Sphere(double _radius, Vector _center, const Color& _color)
	:Object3D(_color), center(_center), radius(_radius)
{
}

bool Sphere::intersects(const Ray& ray)
{
	double a, b, c, delta;
	//double x, y, z, t1;
	Vector intersect;

	a = ray.getDirection().dot(ray.getDirection());
	b = 2 * ((ray.getOrigin().getX() - center.getX()) * ray.getDirection().getX() +
		(ray.getOrigin().getY() - center.getY()) * ray.getDirection().getY() +
		(ray.getOrigin().getZ() - center.getZ()) * ray.getDirection().getZ());
	c = pow(ray.getOrigin().getX() - center.getX(), 2) + pow(ray.getOrigin().getY() - center.getY(), 2) +
		pow(ray.getOrigin().getZ() - center.getZ(), 2) - pow(radius, 2);

	delta = b * b - 4 * a * c;

	if (delta > 0 || delta == 0)
	{
		return true;
	}
	else if (delta < 0)
	{
		return false;
	}

	//if (delta > 0)
	//{
	//	t1 = (-b - sqrt(delta)) / (2 * a);
	//	t2 = (-b + sqrt(delta)) / (2 * a);

	//	if (t1 > (-b + sqrt(delta)) / (2 * a))
	//	{
	//		t1 = (-b + sqrt(delta)) / (2 * a);
	//	}
	//}
	//else if(delta == 0)
	//{
	//	t1 = -b / (2 * a);
	//}
	//else if (delta < 0)
	//{
	//	return 0;
	//}

	//x = ray.getOrigin().getX() * t1 + ray.getDirection().getX();
	//y = ray.getOrigin().getY() * t1 + ray.getDirection().getY();
	//z = ray.getOrigin().getZ() * t1 + ray.getDirection().getZ();

	//intersect = *new Vector(x, y, z);

	//return intersect;

}
