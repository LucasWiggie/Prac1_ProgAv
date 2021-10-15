#pragma once
#include <GL/glut.h>
#include "Vector3D.h"
#include "Color.h"

class Sphere
{
private:
	Vector3D coordinates;
	Color colorCoords;
	Vector3D orientation;

	float radius;
	int slices;
	int slacks;
	float size;

public:
	Sphere() : coordinates(), colorCoords(), orientation(), radius(0.2),slices(50),slacks(50) ,size(0.4) {}

	inline float getCoordinateX() const {
		return this->coordinates.getCoordinateX();
	}

	inline float getCoordinateY() const {
		return this->coordinates.getCoordinateY();
	}

	inline float getCoordinateZ() const {
		return this->coordinates.getCoordinateZ();
	}

	inline float getRedComponent() const {
		return this->colorCoords.getRedComponent();
	}

	inline float getGreenComponent() const {
		return this->colorCoords.getGreenComponent();
	}

	inline float getBlueComponent() const {
		return this->colorCoords.getBlueComponent();
	}

	inline float getSize() const {
		return this->size;
	}

	inline float getRadius() const {
		return this->radius;
	}

	inline int getSlices() const {
		return this->slices;
	}

	inline int getSlacks() const {
		return this->slacks;
	}
	

	inline void setCoordinateX(const float& coordinateXtoSet) {
		this->coordinates.setCoordinateX(coordinateXtoSet);
	}

	inline void setCoordinateY(const float& coordinateYtoSet) {
		this->coordinates.setCoordinateY(coordinateYtoSet);
	}

	inline void setCoordinateZ(const float& coordinateZtoSet) {
		this->coordinates.setCoordinateZ(coordinateZtoSet);
	}

	inline void setRedComponent(const float& redComponentToSet) {
		this->colorCoords.setRedComponent(redComponentToSet);
	}

	inline void setGreenComponent(const float& greenComponentToSet) {
		this->colorCoords.setGreenComponent(greenComponentToSet);
	}

	inline void setBlueComponent(const float& blueComponentToSet) {
		this->colorCoords.setBlueComponent(blueComponentToSet);
	}

	inline void setSize(const float& sizeToSet) {
		this->size = sizeToSet;
	}

	inline void setRadius(const float& radiusToSet) {
		this->size = radiusToSet;
	}

	inline void setSlices(const int& slicesToSet) {
		this->size = slicesToSet;
	}

	inline void setSlacks(const int& slacksToSet) {
		this->size = slacksToSet;
	}


	void Render();
};



