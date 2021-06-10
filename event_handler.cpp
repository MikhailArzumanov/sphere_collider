#include "Environment.hpp"
#include "Sphere.hpp"

void event_handler() {
	sf::Event event;
	while (window.pollEvent(event))
		proccess_event(event);
}
void key_handler(sf::Event& event) {
	switch (event.key.code) {
	case sf::Keyboard::R:
		reload_the_map(map_path);
		break;
	case sf::Keyboard::Escape:
		read_path();
		reload_the_map(map_path);
		break;
	}
}

void mouse_handler(sf::Event& event) {
	float x = event.mouseButton.x, y = event.mouseButton.y;
	sphere the_sphere = create_sphere({ x,y }, { 0,0 }, { 0,2.f * g }, 25.f, 0.5f, sf::Color::White);
	spheres.push_back(the_sphere);
}

void proccess_event(sf::Event& event) {
	switch (event.type) {
	case sf::Event::Closed:
		window.close();
		break;
	case sf::Event::KeyPressed:
		key_handler(event);
		break;
	case sf::Event::MouseButtonPressed:
		mouse_handler(event);
		break;
	}
}