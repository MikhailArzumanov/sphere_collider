#include "Environment.hpp"
#include "Sphere.hpp"

void cycle();



int main(){
	read_path();
	while (window.isOpen())
		cycle();
	return 0;
}

void cycle() {
	event_handler();
	time_handler();
	if(is_colliding)
		collider();
	draw();
}


