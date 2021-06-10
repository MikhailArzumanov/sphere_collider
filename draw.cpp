#include "Environment.hpp"
#include "Sphere.hpp"

void draw() {
	window.clear();
	for (sphere the_sphere : spheres)
		the_sphere.draw();
	window.display();
}