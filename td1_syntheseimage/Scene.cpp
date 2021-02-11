#include "Scene.h"
#include "Bmpfile.h"
#include <stdlib.h>
#include <time.h>

Scene::Scene()
{
}

void Scene::addObject(Object3D* _object)
{
	objects3d.push_back(_object);
}

void Scene::addLight(Light* _light)
{
	lights.push_back(_light);
}

void Scene::render(string fileName, unsigned int width, unsigned int height)
{
	// résolution : width * height * 3 car (R G B)
	unsigned char* colorBuffer = new unsigned char[sizeof(unsigned char)*3*width*height];

	srand(time(NULL));
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width * 3 ; j++) 
		{
			colorBuffer[i * width * 3 + j] = rand() % 256;
		}

	}
	BMPFile::SaveBmp(fileName.c_str(), colorBuffer, width, height);
	delete[]colorBuffer;
}
