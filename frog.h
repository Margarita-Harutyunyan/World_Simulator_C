#ifndef FROG
#define FROG

#include <unistd.h>

struct frog_t;

// Constructor and destructor functions
void frog_init(frog_t*);
void frog_destroy(frog_t*);

// Public behavior functions
void frog_awake(frog_t*);
void frog_eating(frog_t*);

#endif
