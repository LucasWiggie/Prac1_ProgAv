#include "Game.h"
#include <iostream>
using namespace std;

void Game::ProcessKeyPressed(unsigned char key, int px, int py) {
	cout << "Tecla pulsada: " << key << endl;
}

void Game::ProcessMouseMovement(int x, int y) {
	cout << "Movimiento del mouse: " << x << "," << y << endl;
}

void Game::ProcessMouseClick(int button, int state, int x, int y) {
	cout << "Clic: " << button << endl;
}

void Game::Init() {

	// TEAPOT
	Vector3D newTeapotCoords = Vector3D(0, 0, -2);
	Color newTeapotColor = Color(0, 0.2, 0);
	Vector3D newTeapotOrientation = Vector3D(45, 180, 45);

	this->teapot = Teapot(newTeapotCoords, newTeapotColor, newTeapotOrientation, 0.4);

	// CUBE
	Vector3D newCubeCoords = Vector3D(0.8, -0.5, -2);
	Vector3D newCubeOrientation = Vector3D(25, 200, 290);
	Color newCubeColor = Color(0.8, 0.1, 0);

	this->cube = Cube(newCubeCoords, newCubeColor, newCubeOrientation, 0.4);

	// SPHERE
	Vector3D newSphereCoords = Vector3D(0, 0.7, -2);
	Vector3D newSphereOrientation = Vector3D();
	Color newSphereColor = Color(0.5, 0.2, 0.1);

	this->sphere = Sphere(newSphereCoords, newSphereColor, newSphereOrientation, 0.2, 50, 50);


}

void Game::Render() {
	this->GetTeapot().Render();
	this->GetCube().Render();
	this->GetSphere().Render();
	this->GetTorus().Render();
	this->GetCuboid().Render();
	this->GetCylinder().Render();
}

void Game::Update() {

}