#include "Environment.hpp"

float planar_vector::length() {
	return sqrt(x * x + y * y);
}

planar_vector planar_vector::operator=(planar_vector assigned) {
	x = assigned.x;
	y = assigned.y;
	return *this;
}
planar_vector planar_vector::operator*(float n) {
	return planar_vector{ x * n, y * n };
}
void planar_vector::operator /=(float n) {
	x /= n;
	y /= n;
}