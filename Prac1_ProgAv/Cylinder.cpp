#include "Cylinder.h"
#include <GL/glut.h>

void Cylinder::Render() {

	Vector3D newCoords = Vector3D(0.9, 0.3, -2);
	setCoordinates(newCoords);

	Vector3D newOrientation = Vector3D(120, 0, 30);
	setOrientation(newOrientation);

	Color newColor = Color(0.3, 0, 0.3);
	setColor(newColor);

	setBaseRadius(0.3);
	setTopRadius(0.3);
	setHeight(0.4);
	setSlices(50);
	setStacks(50);

	GLUquadricObj* quadricTemp = gluNewQuadric();

	glPushMatrix();
	glTranslatef(this->getCoordinates().getCoordinateX(), this->getCoordinates().getCoordinateY(), this->getCoordinates().getCoordinateZ());
	glColor3f(this->getColor().getRedComponent(), this->getColor().getGreenComponent(), this->getColor().getBlueComponent());
	glRotatef(getOrientation().getCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(getOrientation().getCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(getOrientation().getCoordinateZ(), 0.0, 0.0, 1.0);
	gluCylinder(quadricTemp, getBaseRadius(), getTopRadius(), getHeight(), getSlices(), getStacks());
	glPopMatrix();
	gluDeleteQuadric(quadricTemp);


}