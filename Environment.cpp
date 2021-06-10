#pragma once
#include "Environment.hpp"

float sgn(float x) {
	if (x == 0) return 0.f;
	return (x < 0) ? -1.f : 1.f;
}
float sqr(float x) {
	return x*x;
}

float X_left_verge = 0.f, X_right_verge = 1280.f;
float Y_upper_verge = 720.f, Y_lower_verge = 0.f;

bool is_colliding = true;
float g = -10.f;

float  friction_coefficient = 0.1f;
float collision_coefficient = 2/3.f;

sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML works!");
std::string map_path;

sf::Clock the_clock;