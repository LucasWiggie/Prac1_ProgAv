#include "Cube.h"

void Cube::Render() {

	Vector3D newCoords = Vector3D(0.8, -0.5, -2);
	setCoordinates(newCoords);

	Vector3D newOrientation = Vector3D(25, 200, 290);
	setOrientation(newOrientation);
	
	Color newColor = Color(0.8, 0.1, 0);
	setColor(newColor);

	glPushMatrix();
	glTranslatef(this->getCoordinates().getCoordinateX(), this->getCoordinates().getCoordinateY(), this->getCoordinates().getCoordinateZ());
	glColor3f(this->getColor().getRedComponent(), this->getColor().getGreenComponent(), this->getColor().getBlueComponent());
	
	glRotatef(getOrientation().getCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(getOrientation().getCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(getOrientation().getCoordinateZ(), 0.0, 0.0, 1.0);

	glutSolidCube(this->getSize());
	glPopMatrix();

}
