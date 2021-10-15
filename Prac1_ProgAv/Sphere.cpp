#include "Sphere.h"

void Sphere::Render() {

	setCoordinateZ(-2);
	setCoordinateY(0.5);

	setRedComponent(0.5);
	setGreenComponent(0.2);
	setBlueComponent(0.1);

	


	glPushMatrix();
	glTranslatef(this->getCoordinateX(),this-> getCoordinateY(), this->getCoordinateZ());
	glColor3f(this->getRedComponent(),this->getGreenComponent() ,this->getBlueComponent());
	glRotatef(orientation.getCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(orientation.getCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(orientation.getCoordinateZ(), 0.0, 0.0, 1.0);
	glutSolidSphere(this->getRadius(), this->getSlices(), this->getSlacks());
	glPopMatrix();
}