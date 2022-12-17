#ifndef GRASS
#define GRASS

#include <unistd.h>

struct grass_t;

//Constructor and destructor functions
void grass_init(grass_t*);
void grass_destroy(grass_t*);

//Public behavior function
int grass_aBunch(grass_t*);

#endif
