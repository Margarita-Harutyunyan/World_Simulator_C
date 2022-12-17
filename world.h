#ifndef WORLD
#define WORLD

#include <unistd.h>

struct world_t;

// Constructor and destructor functions
void world_init(world_t*);
void world_destroy(world_t*);

//Public behavior function
void world_startSim(world_t*, tree_t*, frog_t*, sun*);

#endif
