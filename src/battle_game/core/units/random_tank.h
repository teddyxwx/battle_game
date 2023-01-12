#pragma once
#include "battle_game/core/unit.h"
#include "battle_game/core/units/tiny_tank.h"

namespace battle_game::unit {
class RandomTank : public Tank {
 public:
  RandomTank(GameCore *game_core, uint32_t id, uint32_t player_id);
  void Render() override;
  void Update() override;
  [[nodiscard]] bool IsHit(glm::vec2 position) const override;

 protected:
  void Fire();
  void TankMove(float move_speed, float rotate_angular_speed);
  [[nodiscard]] const char *UnitName() const override;
  [[nodiscard]] const char *Author() const override;
};
}  // namespace battle_game::unit