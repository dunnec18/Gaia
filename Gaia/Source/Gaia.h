#pragma once

#include <iostream>

namespace Gaia {
    
    struct Vector3 
    {
        float x, y, z;

        Vector3 operator+(const Vector3& other) const 
            {
            return {x + other.x, y + other.y, z + other.z};
            }

        Vector3 operator*(float scalar) const 
            { 
            return {x * scalar, y * scalar, z * scalar};
            }
    };

    struct RigidBody 
    {
        Vector3 position;
        Vector3 velocity;
        float mass;
        void ApplyForce(const Vector3& force, float deltaTime);
    };
}
