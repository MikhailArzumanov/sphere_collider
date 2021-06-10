#include "Sphere.hpp"

sphere read_sphere(std::ifstream& in) {
	planar_vector p, v, a = {0.f, 2.f*g};
	float r, bouncing_coefficient;
	int R, G, B;

	in >> p.x >> p.y;
	in >> v.x >> v.y;

	in >> r >> bouncing_coefficient;

	in >> R >> G >> B;
	sf::Color color = sf::Color{ (sf::Uint8)R,(sf::Uint8)G,(sf::Uint8)B };
	return create_sphere(p, v, a, r, bouncing_coefficient, color);
}