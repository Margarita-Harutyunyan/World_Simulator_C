#ifndef TREE
#define TREE

#include <unistd.h>

struct tree_t;

// Constructor and destructor functions
void tree_init(tree_t*);
void tree_destroy(tree_t*);

// Public behavior function
int tree_photosynthesis(tree_t*);

#endif

