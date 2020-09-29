#include "Character.hpp"

class Object : public Character {
 public:
  Object(char vis);
  virtual ~Object();
  virtual void performAction() = 0;
};
