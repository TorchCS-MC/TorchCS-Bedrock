#include "vec3.hpp"
#include <sstream>
#include <algorithm>
#include <limits>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

const Vec3 Vec3::ZERO = Vec3(0.0f, 0.0f, 0.0f);

Vec3& Vec3::operator+=(const Vec3& other) {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}

Vec3 Vec3::operator+(const Vec3& b) const {
    return Vec3(x + b.x, y + b.y, z + b.z);
}

Vec3 Vec3::operator-(const Vec3& b) const {
    return Vec3(x - b.x, y - b.y, z - b.z);
}

Vec3& Vec3::operator*=(float scalar) {
    x *= scalar;
    y *= scalar;
    z *= scalar;
    return *this;
}

bool Vec3::operator==(const Vec3& b) const {
    return x == b.x && y == b.y && z == b.z;
}

float Vec3::length() const {
    return std::sqrt(x * x + y * y + z * z);
}

Vec3 Vec3::normalized() const {
    float len = length();
    if (len >= 0.0001f) {
        float invLen = 1.0f / len;
        return Vec3(x * invLen, y * invLen, z * invLen);
    }
    return ZERO;
}

float Vec3::maxComponent() const {
    return std::max({x, y, z});
}

bool Vec3::isNear(const Vec3& other, float epsilon) const {
    return std::fabs(x - other.x) < epsilon && std::fabs(y - other.y) < epsilon && std::fabs(z - other.z) < epsilon;
}

bool Vec3::isNan() const {
    return std::isnan(x) || std::isnan(y) || std::isnan(z);
}

std::string Vec3::toString() const {
    std::ostringstream oss;
    oss << "Vec3(" << x << ", " << y << ", " << z << ")";
    return oss.str();
}

std::string Vec3::toJsonString() const {
    std::ostringstream oss;
    oss << "[" << x << ", " << y << ", " << z << "]";
    return oss.str();
}

Vec3 Vec3::fromXZ(const Vec3& xz, float y) {
    return Vec3(xz.x, y, xz.z);
}

Vec3 Vec3::directionFromRotation(float pitch, float yaw) {
    float radPitch = pitch * (float)(-M_PI / 180.0);
    float radYaw = (yaw * (float)(-M_PI / 180.0)) - (float)(M_PI / 2.0);

    return Vec3(std::cos(radYaw) * std::cos(radPitch), std::sin(radPitch), std::sin(radYaw) * std::cos(radPitch));
}

Vec3 Vec3::directionFromRotation(const Vec3& rot) {
    return directionFromRotation(rot.x, rot.y);
}

Vec3 Vec3::rotationFromDirection(const Vec3& dir) {
    float pitch = std::atan2(dir.y, std::sqrt(dir.x * dir.x + dir.z * dir.z)) * -57.295776f;
    float yaw = std::atan2(dir.z, dir.x) * 57.295776f - 90.0f;
    return Vec3(pitch, yaw, 0.0f);
}

Vec3 Vec3::clamp(const Vec3& val, const Vec3& min, const Vec3& max) {
    return Vec3(std::clamp(val.x, min.x, max.x), std::clamp(val.y, min.y, max.y), std::clamp(val.z, min.z, max.z));
}

Vec3 Vec3::floor(const Vec3& v, float offset) {
    return Vec3(std::floor(v.x + offset), std::floor(v.y + offset), std::floor(v.z + offset));
}

Vec3 Vec3::ceil(const Vec3& v) {
    return Vec3(std::ceil(v.x), std::ceil(v.y), std::ceil(v.z));
}

Vec3 Vec3::abs(const Vec3& v) {
    return Vec3(std::fabs(v.x), std::fabs(v.y), std::fabs(v.z));
}

Vec3 Vec3::xz(const Vec3& v) {
    return Vec3(v.x, 0.0f, v.z);
}

float Vec3::distanceToLineSquared(const Vec3& point, const Vec3& lineStart, const Vec3& lineEnd) {
    Vec3 lineDir = lineEnd - lineStart;
    float lenSq = lineDir.x * lineDir.x + lineDir.y * lineDir.y + lineDir.z * lineDir.z;

    if (lenSq == 0.0f) 
        return (point - lineStart).length();

    float t = ((point - lineStart).x * lineDir.x + (point - lineStart).y * lineDir.y + (point - lineStart).z * lineDir.z) / lenSq;
    Vec3 projection(lineStart.x + t * lineDir.x, lineStart.y + t * lineDir.y, lineStart.z + t * lineDir.z);

    return (point - projection).x * (point - projection).x + (point - projection).y * (point - projection).y + (point - projection).z * (point - projection).z;
}
