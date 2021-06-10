#include "Sphere.hpp"

void sphere::y_wall_collision(float verge) {
	v.y = -v.y * bouncing_coefficient;
	p.y = verge;
}
void sphere::x_wall_collision(float verge) {
	v.x = -v.x * bouncing_coefficient;
	p.x = verge;
}