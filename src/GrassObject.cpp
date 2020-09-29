#include "GrassObject.hpp"

GrassObject::GrassObject() : Object(s_currentVisual) {}

GrassObject::~GrassObject() {}

void GrassObject::visualChange() {
  char temp = s_currentVisual;
  s_currentVisual = s_nextVisual;
  s_nextVisual = temp;
}

void GrassObject::performAction() {
  setVisual(s_currentVisual);
}
