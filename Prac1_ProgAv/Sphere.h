#pragma once
#include <GL/glut.h>
#include "Vector3D.h"
#include "Color.h"
#include "Solid.h"

class Sphere : public Solid
{
private:
	float radius;
	int slices;
	int slacks;

public:
	Sphere() : Solid() {}

	inline float getRadius() const {
		return this->radius;
	}

	inline int getSlices() const {
		return this->slices;
	}

	inline int getSlacks() const {
		return this->slacks;
	}
	
	inline void setRadius(const float& radiusToSet) {
		this->radius = radiusToSet;
	}

	inline void setSlices(const int& slicesToSet) {
		this->slices = slicesToSet;
	}

	inline void setSlacks(const int& slacksToSet) {
		this->slacks = slacksToSet;
	}

	void Render();
};



