#include "Teapot.h"
#define M_PI = 3.14159265359

void Teapot::Render() {

	setCoordinateZ(-2.0);
	setCoordinateX(-0.5);
	setCoordinateY(-0.5);

	orientation.setCoordinateX(45);
	orientation.setCoordinateY(180);
	orientation.setCoordinateZ(45);
	

	glPushMatrix();
	glTranslatef(this->getCoordinateX(), this->getCoordinateY(), this->getCoordinateZ());
	glColor3f(this->getRedComponent(), this->getGreenComponent(), this->getBlueComponent());

	glRotatef(orientation.getCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(orientation.getCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(orientation.getCoordinateZ(), 0.0, 0.0, 1.0);


	glutSolidTeapot(this->getSize());
	glPopMatrix();
}
