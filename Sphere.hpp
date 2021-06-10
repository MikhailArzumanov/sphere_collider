#pragma once
#include "Environment.hpp"

struct sphere {
	sf::CircleShape shape;
	planar_vector p;
	planar_vector v;
	planar_vector a;
	float r;
	float bouncing_coefficient;

	bool is_collides_with(sphere another);

	void x_tick(float t);
	void y_tick(float t);

	void friction(float t);

	void y_wall_collision(float verge);
	void x_wall_collision(float verge);

	void tick(float t);

	void draw();
};
sphere create_sphere(planar_vector p, planar_vector v, planar_vector a, float r, float bouncing_coefficient, sf::Color color);
sphere read_sphere(std::ifstream& in);

extern std::vector<sphere> spheres;