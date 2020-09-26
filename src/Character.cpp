#include "Character.hpp"

Character::Character(char visual) : m_visual(visual) {}

Character::~Character() {}

char Character::getVisual() {
  return m_visual;
}
