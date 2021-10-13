#pragma once
class Vector3D
{
private:
	float coordinateX;
	float coordinateY;
	float coordinateZ;

public:
	Vector3D():coordinateX(0.0),coordinateY(0.0), coordinateZ(0.0) { }

	inline float getCoordinateX() const {
		return this->coordinateX;
	}

	inline float getCoordinateY() const {
		return this->coordinateY;
	}

	inline float getCoordinateZ() const {
		return this->coordinateZ;
	}

	inline void setCoordinateX(const float& coordinateXtoSet) {
		this->coordinateX = coordinateXtoSet;
	}

	inline void setCoordinateY(const float& coordinateYtoSet) {
		this->coordinateY = coordinateYtoSet;
	}

	inline void setCoordinateZ(const float& coordinateZtoSet) {
		this->coordinateZ = coordinateZtoSet;
	}
};

