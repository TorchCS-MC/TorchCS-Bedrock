#pragma once

#include <string>
#include <cmath>
#include "macros.hpp"

struct Vec2 {
    float x;
    float y;

    static const Vec2 ZERO;

    Vec2() : x(0), y(0) {}
    Vec2(float x_, float y_) : x(x_), y(y_) {}

    TORCHCS_EXPORT Vec2 normalized() const;
    TORCHCS_EXPORT Vec2 rotate(float degrees) const;

    TORCHCS_EXPORT std::string toString() const;
    TORCHCS_EXPORT std::string toJsonString() const;
};
