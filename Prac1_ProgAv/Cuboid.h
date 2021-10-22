#pragma once
#include <GL/glut.h>
#include "Vector3D.h"
#include "Color.h"
#include "Solid.h"
class Cuboid : public Solid
{
private:

	float length;
	float height;
	float width;

public: 
	Cuboid() : Solid() {}

	inline float getLength() const {
		return this->length;
	}
	inline float getHeight() const {
		return this->height;
	}
	inline float getWidth() const {
		return this->width;
	}

	inline void setLength(const float& newLength) {
		this->length = newLength;
	}
	inline void setHeight(const float& newHeight) {
		this->length = newHeight;
	}
	inline void setWidth(const float& newWidth) {
		this->length = newWidth;
	}

	void Render();
};
