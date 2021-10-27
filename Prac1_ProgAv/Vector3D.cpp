#include "Vector3D.h"
Vector3D Vector3D:: Add(const Vector3D& vector) {
	return *this + vector;
}
Vector3D Vector3D::Substract(const Vector3D& vector) {
	return *this - vector;
}
Vector3D Vector3D:: Product(const float& value) {
	return *this * value;
}
Vector3D Vector3D:: Division(const float& value) {
	return *this / value;
}
float Vector3D:: DotProduct(const Vector3D& vector) {
	return *this * vector;
}

Vector3D Vector3D::operator+(const Vector3D& vector) {
	float x = coordinateX + vector.coordinateX;
	float y = coordinateY + vector.coordinateY;
	float z = coordinateZ + vector.coordinateZ;
	Vector3D newVec(x, y, z);
	return newVec;
}
Vector3D Vector3D::operator-(const Vector3D& vector) {
	float x = coordinateX - vector.coordinateX;
	float y = coordinateY - vector.coordinateY;
	float z = coordinateZ - vector.coordinateZ;
	Vector3D newVec(x, y, z);
	return newVec;
}
Vector3D Vector3D:: operator*(const float& value) {
	Vector3D newVec(coordinateX*value, coordinateY*value, coordinateZ*value);
	return newVec;
	
}
Vector3D Vector3D::operator/(const float& value) {
	Vector3D newVec(coordinateX / value, coordinateY / value, coordinateZ / value);
	return newVec;
}
float Vector3D::operator*(const Vector3D& vector) {
	return coordinateX * vector.coordinateX + coordinateY * vector.coordinateY + coordinateZ * vector.coordinateZ;
}