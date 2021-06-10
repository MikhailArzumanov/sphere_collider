#include "Environment.hpp"
#include "Sphere.hpp"

void time_handler() {
	float time = static_cast<float>(the_clock.getElapsedTime().asMilliseconds());
	if (time > 100 / 6.f)
		tick_tock(1/6.f);
}
void tick_tock(float dt) {
	the_clock.restart();
	for (sphere& the_sphere : spheres)
		the_sphere.tick(dt);
}