#include "Cube.h"

void Cube::Render() {

	setCoordinateZ(-2.0);
	setCoordinateX(6.0);

	glPushMatrix();
	glTranslatef(this->getCoordinateX(), this->getCoordinateY(), this->getCoordinateZ());
	glColor3f(this->getRedComponent(), this->getGreenComponent(), this->getBlueComponent());

	/*
	glRotatef(<ángulo de rotación en x>, 1.0, 0.0, 0.0);
	glRotatef(<ángulo de rotación en y>, 0.0, 1.0, 0.0);
	glRotatef(<ángulo de rotación en z>, 0.0, 0.0, 1.0);
	*/

	glutSolidCube(this->getSize());
	glPopMatrix();

}
