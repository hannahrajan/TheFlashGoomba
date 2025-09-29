#ifndef COLLISION_H
#define COLLISION_H

struct position {
    int x, y;
};

struct collisionObject {
    struct position pos;
    int width, height;
};

char isColliding(struct collisionObject *object1, struct collisionObject *object2);

#endif
