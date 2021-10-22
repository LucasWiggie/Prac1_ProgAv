#pragma once
#include "Teapot.h"
#include "Cube.h"
#include "Sphere.h"
#include "Torus.h"

class Game
{
private:
	Teapot teapot;
	Cube cube;
	Sphere sphere;
	Torus torus;

public:
	inline Teapot GetTeapot() {
		return this->teapot;
	}

	inline Cube GetCube() {
		return this -> cube;
	}

	inline Sphere GetSphere() {
		return this->sphere;
	}

	inline Torus GetTorus() {
		return this->torus;
	}

	void Init();
	void Render();
	void Update();
	void ProcessKeyPressed(unsigned char key, int px, int py);
	void ProcessMouseMovement(int x, int y);
	void ProcessMouseClick(int button, int state, int x, int y);

};

