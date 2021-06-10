#pragma once
#include <SFML/Graphics.hpp>

#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>

void read_path();

bool read_the_map(std::string path);
void reload_the_map(std::string path);

void proccess_event(sf::Event& event);
void event_handler();

void tick_tock(float dt);
void time_handler();

void collider();

void draw();