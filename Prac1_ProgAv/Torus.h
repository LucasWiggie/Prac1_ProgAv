#pragma once
#include "Solid.h"
#include <GL/glut.h>

class Torus : public Solid
{
private:
	double innerRadius;
	double outerRadius;
	int faces;
	int rings;

public:
	Torus() : Solid(){}

	inline float getInnerRadius() const {
		return this->innerRadius;
	}

	inline float getOuterRadius() const {
		return this->outerRadius;
	}

	inline int getFaces() const {
		return this->faces;
	}

	inline int getRings() const {
		return this->rings;
	}

	inline void setInnerRadius(const float& innerRadiusToSet) {
		this->innerRadius = innerRadiusToSet;
	}

	inline void setOuterRadius(const float& outerRadiusToSet) {
		this->outerRadius = outerRadiusToSet;
	}

	inline void setFaces(const int& facesToSet) {
		this->faces = facesToSet;
	}

	inline void setRings(const int& ringsToSet) {
		this->rings = ringsToSet;
	}

	void Render();
};

