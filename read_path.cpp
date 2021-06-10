#include "functions.hpp"
#include "Environment.hpp"

void read_path() {
	std::cout << "Input the path to the map: ";
	std::cin >> map_path;
	while (read_the_map(map_path)) {
		std::cout << "File doesn't exist, reenter the path to the map: ";
		std::cin >> map_path;
	}
}