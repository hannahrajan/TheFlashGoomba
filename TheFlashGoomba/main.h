#ifndef MAIN_H
#define MAIN_H

#include "gba.h"
#include "animation.h"
#include "collision.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#define GRAVITY 1
#define MAX_FORCEFIELDS 3
#define MAX_PLATFORMS 4
#define MAX_FORCEFIELD_TIME 4
#define MAX_KOOPAS 3
#define MAX_GOOMBA_LIVES 4
#define MAX_MARIO_LIVES 3
#define FIREBALL_RATE 6
#define KOOPA_SPAWN_RATE 2
#define IFRAMES 1
#define FRAME_RATE 60
#define TEXT_W 6
#define TEXT_H 8

struct movement {
    int vx, vy;
    int vyo;
};

struct forcefield {
    struct collisionObject collider;
    struct frames frames;
    int timeActive;
    char isActive;
};

struct platform {
    struct collisionObject collider;
    struct frames frames;
};

struct object {
    struct frames frames;
    struct movement kinematics;
    struct collisionObject collider;
    char isActive;
    char hasChanged;
};

#endif
