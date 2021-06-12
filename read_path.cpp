#include "functions.hpp"
#include "Environment.hpp"

void read_path() {
	std::cout << "Input the path to the map (empty for default): ";
	std::getline(std::cin, map_path);
	if (map_path == "")
		map_path = "example_1.map";
	while (read_the_map(map_path)) {
		std::cout << "File doesn't exist, reenter the path to the map: ";
		std::cin >> map_path;
	}
}