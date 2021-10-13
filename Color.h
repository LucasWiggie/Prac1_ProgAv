#pragma once
class Color
{
private:
	float redComponent;
	float greenComponent;
	float blueComponent;

public:
	Color(): redComponent(0.2), greenComponent(0.3), blueComponent(0.4) {}

	inline float getRedComponent() const {
		return this->redComponent;
	}

	inline float getGreenComponent() const {
		return this->greenComponent;
	}

	inline float getBlueComponent() const {
		return this->blueComponent;
	}

	inline void setRedComponent(const float& redComponentToSet) {
		if (redComponentToSet >= 0 && redComponentToSet <= 1) {
			this->redComponent = redComponentToSet;
		}
	}

	inline void setGreenComponent(const float& greenComponentToSet) {
		if (greenComponentToSet >= 0 && greenComponentToSet <= 1) {
			this->greenComponent = greenComponentToSet;
		}
	}

	inline void setBlueComponent(const float& blueComponentToSet) {
		if (blueComponentToSet >= 0 && blueComponentToSet <= 1) {
			this->blueComponent = blueComponentToSet;
		}
	}
};

