#include <stdio.h>
#include <stdlib.h>

// Define the type sun_t
typedef struct {
        int shining;
} sun_t;

//Constructor of a sun object
void sun_init(struct sun_t* this) {
        this->shining = 1;
}

//Destructor of a sun object
void sun_destroy(struct sun_t* sun) {

}

// Define the type tree_t
typedef struct {} tree_t;

//Constructor of a tree object
void tree_init(struct tree_t*) {
}

//Destructor of a tree object
void tree_destroy(struct tree_t*) {
}

//Public behavior of a tree object
int tree_photosynthesis(struct tree_t* this) {
        struct sun_t sun;
        if (sun.shining == 1) {
                printf("The tree is producing oxygen...");
                return 1;
        }
        else {
                printf("No sun, so no air to breathe...");
                return 0;
        }
}


// Define the type grass_t
typedef struct{
        int bunch;
} grass_t;

// Constructor of a grass object
void grass_init(struct grass_t* this) {
        this->bunch = 1;
}

// Destructor of a grass object
void grass_destroy(struct grass_t* this) {
}

// The usage of the private behavior
int grass_aBunch(struct grass_t* this) {
        return this->bunch;
}

// Define the type frog_t
typedef struct {
        int energy;
} frog_t;


// Constructor of a frog object
void frog_init(struct frog_t* this) {
        this->energy = 3;
}

// Destructor of a frog object
void frog_destroy(struct frog_t* this) {
}

// Public behavior of the frog_t type
void frog_eating(struct frog_t* this) {
        struct grass_t grass;
        printf("The frog is eating...");
        while(1) {
                this->energy += grass_aBunch(&grass);
                if (this->energy > 3) {
                        printf("The frog is full now...");
                        break;
                }
        }
}


void frog_awake(struct frog_t* this) {
        struct tree_t tree;
        if (tree_photosynthesis(&tree) == 0) {
                printf("The frog is sleeping...");
        }
        else {
                printf("The frog is jumping...");
                while(1) {
                        this->energy -= 1;
                        if (this->energy < 0) {
                                printf("The frog is hungry...");
                                frog_eating(this);
                                break;
                        }
                }
        }
}



//Define the type world_t
typedef struct {} world_t;

// Constructor of a world object
void world_init(struct world_t* this){};

//Destructor of a world object
void world_destroy(struct world_t* this){};

//Public behavior of a world object

void world_startSim(struct world_t* this, struct tree_t* tree, struct frog_t* frog, struct sun_t* sun) {
        int day = 1;
        char q;
        while(1) {
                printf("Day %d: ", day);
                printf("Is today the day? (y/n) ");
                scanf("%c", &q);
                if (q == 'y') {
                        printf("'This morning the frog commited suicide...\nThere is nothing to watch here anymore...\nBye\n");
                        break;
                }
                else {
                        tree_photosynthesis(tree);
                        frog_awake(frog);
                        sun->shining = 0;
                        printf("It's nighttime...");
                        tree_photosynthesis(tree);
                        frog_awake(frog);
                        sun->shining = 1;
                        day += 1;
                }
        }
}

