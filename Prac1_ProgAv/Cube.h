#pragma once
#include <GL/glut.h>
#include "Vector3D.h"
#include "Color.h"
#include "Solid.h";

class Cube : public Solid
{	
public:
	Cube() : Solid() {}
	void Render();
};

