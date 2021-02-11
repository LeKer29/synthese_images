#include <iostream>
#include "Scene.h"
#include "Sphere.h"
using namespace std;


int main() 
{
	Scene scene;
	scene.addObject(new Sphere(5,*new Vector(10,50,60),*new Color(255,0,0)));
	scene.render("test2.bmp",800,400);


}