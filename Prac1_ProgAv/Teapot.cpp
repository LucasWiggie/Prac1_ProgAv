#include "Teapot.h"
#define M_PI = 3.14159265359

void Teapot::Render() {

	//Vector3D orientation(3.14159265359, 3.14159265359, 3.14159265359);
	orientation.setCoordinateX(3.14159265359);
	orientation.setCoordinateY(3.14159265359);
	orientation.setCoordinateZ(3.14159265359);

	setCoordinateZ(-2.0);
	glPushMatrix();
	glTranslatef(this->getCoordinateX(), this->getCoordinateY(), this->getCoordinateZ());
	glColor3f(this->getRedComponent(), this->getGreenComponent(), this->getBlueComponent());

	glRotatef(orientation.getCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(orientation.getCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(orientation.getCoordinateZ(), 0.0, 0.0, 1.0);


	glutSolidTeapot(this->getSize());
	glPopMatrix();
}
