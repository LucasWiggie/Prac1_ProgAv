#include "Teapot.h"
#define M_PI = 3.14159265359

void Teapot::Render() {

	Vector3D newCoords = Vector3D(0, 0, -2);
	setCoordinates(newCoords);
	
	Vector3D newOrientation = Vector3D(45, 180, 45);
	setOrientation(newOrientation);

	Color newColor = Color(0, 0.2, 0);
	setColor(newColor);

	glPushMatrix();
	glTranslatef(this->getCoordinates().getCoordinateX(), this->getCoordinates().getCoordinateY(), this->getCoordinates().getCoordinateZ());
	glColor3f(this->getColor().getRedComponent(), this->getColor().getGreenComponent(), this->getColor().getBlueComponent());

	glRotatef(getOrientation().getCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(getOrientation().getCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(getOrientation().getCoordinateZ(), 0.0, 0.0, 1.0);

	glutSolidTeapot(this->getSize());
	glPopMatrix();
}
