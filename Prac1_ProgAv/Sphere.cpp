#include "Sphere.h"

void Sphere::Render() {

	Vector3D newCoords = Vector3D(0, 0.7, -2);
	setCoordinates(newCoords);

	Color newColor = Color(0.5, 0.2, 0.1);
	setColor(newColor);

	setRadius(0.2);
	setSlacks(50);
	setSlices(50);

	glPushMatrix();
	glTranslatef(this->getCoordinates().getCoordinateX(), this->getCoordinates().getCoordinateY(), this->getCoordinates().getCoordinateZ());
	glColor3f(this->getColor().getRedComponent(), this->getColor().getGreenComponent(), this->getColor().getBlueComponent());

	glRotatef(getOrientation().getCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(getOrientation().getCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(getOrientation().getCoordinateZ(), 0.0, 0.0, 1.0);

	glutSolidSphere(this->getRadius(), this->getSlices(), this->getSlacks());
	glPopMatrix();

}