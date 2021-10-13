#include "Teapot.h"

void Teapot::Render() {
	glPushMatrix();
	glTranslatef(this->getCoordinateX(), this->getCoordinateY(), this->getCoordinateZ());
	glColor3f(this->getRedComponent(), this->getGreenComponent(), this->getBlueComponent());
	glutSolidTeapot(this->getSize());
	glPopMatrix();
}
