#ifndef ANIMATION_H
#define ANIMATION_H

#include "gba.h"

#define ANIMATION_SPEED 10

struct frames {
    const u16 **frames;
    int currentFrame;
    int numFrames;
    int width;
    int height;
    int animationTimer;
};

void startAnimation(struct frames *f, const u16 **frameData, int numFrames, int width, int height);

void updateAnimation(struct frames *f);

void drawAnimation(struct frames *f, int x, int y);

#endif