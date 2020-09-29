#include "Object.hpp"

class GrassObject : public Object {
 public:
  static char s_currentVisual;  // starting 177
  static char s_nextVisual;     // starting 178

  GrassObject();
  ~GrassObject();
  static void visualChange();
  void performAction() override;
};
