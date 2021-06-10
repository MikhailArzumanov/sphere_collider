#pragma once
#include <SFML/Graphics.hpp>
#include "functions.hpp"

float sgn(float x);
float sqr(float x);

struct planar_vector {
	float x, y;
	float length();
	planar_vector operator=(planar_vector assigned);
	planar_vector operator*(float n);
	void operator/=(float n);
};

extern float X_left_verge, X_right_verge;
extern float Y_upper_verge, Y_lower_verge;

extern bool is_colliding;
extern float g;

extern float  friction_coefficient;
extern float collision_coefficient;

extern sf::RenderWindow window;
extern sf::Clock the_clock;
extern std::string map_path;



