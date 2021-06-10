#include "Sphere.hpp"

void sphere::friction(float t) {
	float dv = abs(a.y) * friction_coefficient * sgn(v.x);
	if (abs(dv) < abs(v.x))
		v.x -= dv;
	else v.x = 0.f;
}