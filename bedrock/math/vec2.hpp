#pragma once

#include <string>
#include <cmath>

struct Vec2 {
    float x;
    float y;

    static const Vec2 ZERO;

    Vec2() : x(0), y(0) {}
    Vec2(float x_, float y_) : x(x_), y(y_) {}

    Vec2 normalized() const;
    Vec2 rotate(float degrees) const;

    std::string toString() const;
    std::string toJsonString() const;
};
