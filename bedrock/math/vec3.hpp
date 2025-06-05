#pragma once

#include <cmath>
#include <string>

struct Vec3 {
    float x, y, z;

    static const Vec3 ZERO;

    Vec3() : x(0), y(0), z(0) {}
    Vec3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}

    Vec3& operator+=(const Vec3& other);
    Vec3 operator+(const Vec3& b) const;
    Vec3 operator-(const Vec3& b) const;
    Vec3& operator*=(float scalar);
    bool operator==(const Vec3& b) const;

    float length() const;
    Vec3 normalized() const;
    float maxComponent() const;
    bool isNear(const Vec3& other, float epsilon) const;
    bool isNan() const;

    std::string toString() const;
    std::string toJsonString() const;

    static Vec3 fromXZ(const Vec3& xz, float y);
    static Vec3 directionFromRotation(float pitch, float yaw);
    static Vec3 directionFromRotation(const Vec3& rot);
    static Vec3 rotationFromDirection(const Vec3& dir);
    static Vec3 clamp(const Vec3& val, const Vec3& min, const Vec3& max);
    static Vec3 floor(const Vec3& v, float offset = 0.0f);
    static Vec3 ceil(const Vec3& v);
    static Vec3 abs(const Vec3& v);
    static Vec3 xz(const Vec3& v);
    static float distanceToLineSquared(const Vec3& point, const Vec3& lineStart, const Vec3& lineEnd);
};
