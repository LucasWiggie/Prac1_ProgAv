#pragma once
#include "Teapot.h"
#include "Cube.h"
#include "Sphere.h"
class Game
{
private:
	Teapot teapot;
	Cube cube;
	Sphere sphere;

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

	void Init();
	void Render();
	void Update();
	void ProcessKeyPressed(unsigned char key, int px, int py);
	void ProcessMouseMovement(int x, int y);
	void ProcessMouseClick(int button, int state, int x, int y);

};

