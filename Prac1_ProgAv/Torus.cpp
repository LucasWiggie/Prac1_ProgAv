#include "Torus.h"

void Torus::Render() {

	Vector3D newCoords = Vector3D(0.8, 0.5, -1);
	setCoordinates(newCoords);

	Vector3D newOrientation = Vector3D(45, 90, 270);
	setOrientation(newOrientation);

	Color newColor = Color(0.3, 0.1, 0.5);
	setColor(newColor);

	setFaces(50);
	setInnerRadius(2);
	setOuterRadius(5);
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
