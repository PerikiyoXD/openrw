#ifndef GAME_HPP
#define GAME_HPP

#include <engine/GameWorld.hpp>
#include <objects/GameObject.hpp>

constexpr double PiOver180 = 3.1415926535897932384626433832795028 / 180;

// TODO: Move all of this stuff so it's not just lying around.

bool hitWorldRay(glm::vec3& hit, glm::vec3& normal,
                 GameObject** object = nullptr);
bool hitWorldRay(const glm::vec3& start, const glm::vec3& direction,
                 glm::vec3& hit, glm::vec3& normal,
                 GameObject** object = nullptr);

#define GAME_TIMESTEP (1.f / 30.f)

#endif  // GAME_HPP
