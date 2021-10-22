#pragma once
#include "Solid.h" 

class Cylinder : public Solid
{
private:
	double baseRadius;
	double topRadius;
	double height;
	int slices;
	int stacks;

public:
	Cylinder() : Solid(){}

	inline double getBaseRadius() const{
		return this->baseRadius;
	}

	inline double getTopRadius() const {
		return this->topRadius;
	}

	inline double getHeight() const {
		return this->height;
	}

	inline int getSlices() const {
		return this->slices;
	}

	inline int getStacks() const {
		return this->stacks;
	}

	inline void setBaseRadius(const double& baseRadiusToSet) {
		this->baseRadius = baseRadiusToSet;
	}

	inline void setTopRadius(const double& topRadiusToSet) {
		this->topRadius = topRadiusToSet;
	}

	inline void setHeight(const double& heightToSet) {
		this->height = heightToSet;
	}

	inline void setSlices(const int& slicesToSet) {
		this->slices = slicesToSet;
	}

	inline void setStacks(const int& stacksToSet) {
		this->stacks = stacksToSet;
	}

	void Render();
};

