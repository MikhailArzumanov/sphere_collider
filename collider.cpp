#include "Environment.hpp"
#include "Sphere.hpp"

void collider() {
	for (std::vector<sphere>::iterator it_i = spheres.begin(); it_i != spheres.end(); it_i++)
		for (std::vector<sphere>::iterator it_j = it_i + 1; it_j != spheres.end(); it_j++)
			if (it_i->is_collides_with(*it_j)) {
				float dx = it_i->p.x - it_j->p.x;
				float dy = it_i->p.y - it_j->p.y;
				planar_vector p = { dx, dy };
				p /= p.length();
				it_i->v = p * (it_i->v.length());
				it_j->v = p * (-it_j->v.length());
			}
}