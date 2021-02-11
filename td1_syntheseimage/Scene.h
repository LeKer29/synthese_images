#pragma once
#include <vector>
#include <string>
#include "Object3D.h"
#include "Light.h"
using namespace std;

class Scene
{
public:
	Scene();
	void addObject(Object3D* _object);
	void addLight(Light* _light);
	void render(string fileName, unsigned int width, unsigned int height);
protected:
	vector<Object3D*> objects3d;
	vector<Light*> lights;
};

