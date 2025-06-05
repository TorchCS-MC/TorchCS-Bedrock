#include "vec2.hpp"
#include <sstream>
#include <cmath>

const Vec2 Vec2::ZERO = Vec2(0.0f, 0.0f);

Vec2 Vec2::normalized() const {
    float len = std::sqrt(x * x + y * y);
    if (len >= 0.0001f) {
        float invLen = 1.0f / len;
        return Vec2(x * invLen, y * invLen);
    }
    return ZERO;
}

Vec2 Vec2::rotate(float degrees) const {
    float radians = degrees * (3.14159265f / 180.0f);
    float sinTheta = std::sin(radians);
    float cosTheta = std::cos(radians);
    return Vec2(
        x * cosTheta - y * sinTheta,
        x * sinTheta + y * cosTheta
    );
}

std::string Vec2::toString() const {
    std::ostringstream oss;
    oss << "Vec2(" << x << ", " << y << ")";
    return oss.str();
}

std::string Vec2::toJsonString() const {
    std::ostringstream oss;
    oss << "[" << x << ", " << y << "]";
    return oss.str();
}
