#include "Sphere.hpp"

void sphere::x_tick(float t) {
	p.x += t * v.x + a.x * t * t / 2.f;
	v.x += t * a.x;
}
void sphere::y_tick(float t) {
	p.y += t * v.y + a.y * t * t / 2.f;
	v.y += t * a.y;
}