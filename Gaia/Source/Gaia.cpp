#include "Gaia.h"
#include <iostream>

namespace Gaia {

void RigidBody::ApplyForce(const Vector3& force, float deltaTime) {
    Vector3 acceleration = force * (1.0f / mass);
    velocity = velocity + acceleration * deltaTime;
    position = position + velocity * deltaTime;
}

}
