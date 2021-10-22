#pragma once
#include <GL/glut.h>
#include "Vector3D.h"
#include "Color.h"
#include "Solid.h"

class Teapot : public Solid
{
public:
	Teapot() : Solid() {}

	void Render();
};

