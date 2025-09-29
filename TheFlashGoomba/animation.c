#include "animation.h"

#include <stdio.h>
#include <stdlib.h>

#include "gba.h"

void startAnimation(struct frames *f, const u16 **frameData, int numFrames, int width, int height) {
    f->frames = frameData;
    f->currentFrame = 0;
    f->numFrames = numFrames;
    f->width = width;
    f->height = height;
    f->animationTimer = 0;
}
void updateAnimation(struct frames *f) {
    if (++f->animationTimer >= ANIMATION_SPEED) { //depends on fps set by the header file
        f->animationTimer = 0;
        f->currentFrame = (f->currentFrame + 1) % f->numFrames;
    }
}

void drawAnimation(struct frames *f, int x, int y) {
    const u16 *currentFrameData = f->frames[f->currentFrame];
    drawImageDMA(y, x, f->width, f->height, currentFrameData);
}