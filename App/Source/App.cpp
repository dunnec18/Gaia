#include "/Users/cdunne/git_repos/Gaia/Gaia/Source/Gaia.h"
#include <iostream>

int main() {
    
    Gaia::RigidBody body;
    body.position = {0.0f, 0.0f, 0.0f};
    body.velocity = {0.0f, 0.0f, 0.0f};
    body.mass = 1.0f;

    Gaia::Vector3 force = {0.0f, 9.8f, 0.0f}; // Gravity

    float deltaTime = 0.016f; // 60 FPS

    for (int i = 0; i < 60; ++i) { // Simulate for 1 second
        body.ApplyForce(force, deltaTime);
        std::cout << "Time: " << i * deltaTime << "s, Position: (" 
                  << body.position.x << ", " << body.position.y << ", " 
                  << body.position.z << ")\n";
};
return 0;
};
