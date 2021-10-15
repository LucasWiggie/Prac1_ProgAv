#include "Cube.h"

void Cube::Render() {

	setCoordinateZ(-2);
	setCoordinateX(0.5);
	setCoordinateY(-0.5);

	orientation.setCoordinateX(25);
	orientation.setCoordinateY(200);
	orientation.setCoordinateZ(290);
	
	setGreenComponent(0.1);
	setRedComponent(0.8);

	glPushMatrix();
	glTranslatef(this->getCoordinateX(), this->getCoordinateY(), this->getCoordinateZ());
	glColor3f(this->getRedComponent(), this->getGreenComponent(), this->getBlueComponent());

	
	glRotatef(orientation.getCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(orientation.getCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(orientation.getCoordinateZ(), 0.0, 0.0, 1.0);
	

	glutSolidCube(this->getSize());
	glPopMatrix();

}
