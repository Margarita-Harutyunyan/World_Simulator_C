#include <stdlib.h>

#include "sun.h"
#include "tree.h"
#include "grass.h"
#include "frog.h"
#include "world.h"

int main() {
	struct sun_t* sun;
	struct tree_t* tree;
	struct grass_t* grass;
	struct frog_t* frog;
	struct world_t* world;

	//Construction
	sun_init(sun);
	tree_init(tree);
	grass_init(grass);
	frog_init(frog);
	world_init(world);

	world_startSim(world, tree, frog, sun);

	//Destruction
	sun_destroy(sun);
	tree_destroy(tree);
	grass_destroy(grass);
	frog_destroy(frog);
	world_destroy(world);

	return 0;
}
