#pragma once
#include "Vector3D.h"
#include "Color.h"

class Solid
{
private:
	Vector3D coordinates;
	Color colorCoords;
	Vector3D orientation;

	float size;

public:
	Solid() : coordinates(), colorCoords(), orientation(), size(0.4){}

	inline Vector3D getCoordinates() const {
		return this->coordinates;
	}

	inline Color getColor() const {
		return this->colorCoords;
	}

	inline Vector3D getOrientation() const {
		return this->orientation;
	}

	inline float getSize() const {
		return this->size;
	}

	inline void setCoordinates(Vector3D newCoordinates) {
		this->coordinates.setCoordinateX(newCoordinates.getCoordinateX());
		this->coordinates.setCoordinateY(newCoordinates.getCoordinateY());
		this->coordinates.setCoordinateZ(newCoordinates.getCoordinateZ());
	}

	inline void setColor(Color newColor) {
		this->colorCoords.setRedComponent(newColor.getRedComponent());
		this->colorCoords.setGreenComponent(newColor.getGreenComponent());
		this->colorCoords.setBlueComponent(newColor.getBlueComponent());
	}

	inline void setOrientation(Vector3D newOrientation) {
		this->orientation.setCoordinateX(newOrientation.getCoordinateX());
		this->orientation.setCoordinateY(newOrientation.getCoordinateY());
		this->orientation.setCoordinateZ(newOrientation.getCoordinateZ());
	}

	inline void setSize(const float& sizeToSet) {
		this->size = sizeToSet;
	}

	virtual void Render() = 0;
};

