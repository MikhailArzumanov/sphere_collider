#include "Sphere.hpp"

void sphere::draw() {
	shape.setPosition(p.x, Y_upper_verge - 2 * r - p.y);
	window.draw(shape);
}