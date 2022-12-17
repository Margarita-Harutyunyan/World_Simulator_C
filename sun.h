#ifndef SUN
#define SUN

#include <unistd.h>

struct sun_t;

// Constructor and destructor functions
void sun_init(sun_t*);
void sun_destroy(sun_t*);


#endif
