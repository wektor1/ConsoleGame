#include "GrassObject.hpp"
#include <algorithm>

GrassObject::GrassObject() : Object(s_currentVisual) {}

GrassObject::~GrassObject() {}

void GrassObject::visualChange() {
  std::swap(s_currentVisual, s_nextVisual);
}

void GrassObject::performAction() {
  setVisual(s_currentVisual);
}
