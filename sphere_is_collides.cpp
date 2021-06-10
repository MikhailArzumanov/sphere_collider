#include "Sphere.hpp"

bool sphere::is_collides_with(sphere another) {

	float dx = (p.x+r) - (another.p.x+another.r);
	float dy = (p.y+r) - (another.p.y+another.r);
	return sqr(r + another.r) > (sqr(dx) + sqr(dy));
}