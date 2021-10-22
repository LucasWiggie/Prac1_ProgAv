#include "Torus.h"

void Torus::Render() {

	Vector3D newCoords = Vector3D(-0.6, -0.2, -2);
	setCoordinates(newCoords);

	Vector3D newOrientation = Vector3D(20, 45, 0);
	setOrientation(newOrientation);

	Color newColor = Color(0, 0.1, 0.5);
	setColor(newColor);

	setFaces(50);
	setInnerRadius(0.05);
	setOuterRadius(0.1);
	setRings(50);

	glPushMatrix();
	glTranslatef(getCoordinates().getCoordinateX(), getCoordinates().getCoordinateY(), getCoordinates().getCoordinateZ());
	glColor3f(getColor().getRedComponent(), getColor().getGreenComponent(), getColor().getBlueComponent());
	glRotatef(getOrientation().getCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(getOrientation().getCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(getOrientation().getCoordinateZ(), 0.0, 0.0, 1.0);
	glutSolidTorus(innerRadius, outerRadius, faces, rings);
	glPopMatrix();
}
