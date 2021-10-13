#pragma once
#include <GL/glut.h>
#include "Vector3D.h"
#include "Color.h"

class Teapot
{
private:
	/*
	float coordinateX;
	float coordinateY;
	float coordinateZ;
		
	float redComponent;
	float greenComponent;
	float blueComponent;
	*/
	
	Vector3D coordinates;
	Color colorCoords;

	float size;

public:
	Teapot() : coordinates(),
		colorCoords(), size(0.4) {}

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

	void Render();
};

