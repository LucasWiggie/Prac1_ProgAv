#include "Cuboid.h"
void Cuboid::Render() {

	Vector3D newCoords = Vector3D(-0.5, 0, -2);
	setCoordinates(newCoords);

	Vector3D newOrientation = Vector3D(60, 200, 200);
	setOrientation(newOrientation);

	Color newColor = Color(0.6, 0.2, 0.1);
	setColor(newColor);

	setLength(2);
	setHeight(1.5);
	setWidth(3);

	glPushMatrix();
	glTranslatef(this->getCoordinates().getCoordinateX(), this->getCoordinates().getCoordinateY(), this->getCoordinates().getCoordinateZ());
	glColor3f(this->getColor().getRedComponent(), this->getColor().getGreenComponent(), this->getColor().getBlueComponent());

	glRotatef(getOrientation().getCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(getOrientation().getCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(getOrientation().getCoordinateZ(), 0.0, 0.0, 1.0);
	glScalef(length, height, width);
	glutSolidCube(1);
	glPopMatrix();

}
