#include "Environment.hpp"
#include "Sphere.hpp"

bool read_the_map(std::string path) {
	std::ifstream in(path);
	if (!in.is_open()) return true;
	in >> g;
	
	std::string do_collisions;
	in >> do_collisions;
	is_colliding = do_collisions == "true";

	sphere the_sphere;
	while (!in.eof()) {
		the_sphere = read_sphere(in);
		spheres.push_back(the_sphere);
	}
	in.close();
	return false;
}
void reload_the_map(std::string path) {
	spheres.clear();
	read_the_map(path);
}