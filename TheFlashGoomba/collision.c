#include "collision.h"

#include <stdio.h>
#include <stdlib.h>

#include "gba.h"

char isColliding(struct collisionObject *object1, struct collisionObject *object2) {
    if (object1 == NULL || object2 == NULL) { //invalid input
        return -1;
    }

    if (((object1->pos.x >= object2->pos.x && object1->pos.x <= (object2->pos.x + object2->width)) && //within width, top corner of obj1
    (object1->pos.y >= object2->pos.y && object1->pos.y <= (object2->pos.y + object2->height))) || //within height, top corner of obj1
    ((object2->pos.x >= object1->pos.x && object2->pos.x <= (object1->pos.x + object1->width)) && //within width, top corner of obj2
    (object2->pos.y >= object1->pos.y && object2->pos.y <= (object1->pos.y + object1->height)))) { //within height, top corner of obj2
        return 1;
    } else {
        return 0;
    }
}