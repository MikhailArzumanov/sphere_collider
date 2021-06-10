#include "Sphere.hpp"

sphere create_sphere(planar_vector p, planar_vector v, planar_vector a, float r, float bouncing_coefficient, sf::Color color) {
	sf::CircleShape shape(r);
	shape.setFillColor(color);
	sphere the_sphere = sphere{ shape, p,v,a,r,bouncing_coefficient };
	return the_sphere;
}