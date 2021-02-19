#pragma once
#include "Frame.h"
#include "../32blit-beta/32blit/types/rect.hpp"

class AnimationFrame : public Frame {
	blit::Rect sprite;

    AnimationFrame(blit::Rect sprite, uint8_t frameLength) {
        this->sprite = sprite;
        this->frameLength = frameLength;
    };
};

