#include "Sphere.hpp"

void sphere::tick(float t) {
	x_tick(t);
	y_tick(t);

	if (p.y < Y_lower_verge)
		y_wall_collision(Y_lower_verge);
	else if (p.y > Y_upper_verge - 2.f * r)
		y_wall_collision(Y_upper_verge - 2.f * r);

	if (p.y == Y_lower_verge)
		friction(t);

	if (p.x > X_right_verge - 2.f * r)
		x_wall_collision(X_right_verge - 2.f * r);
	else if (p.x < X_left_verge)
		x_wall_collision(X_left_verge);
}