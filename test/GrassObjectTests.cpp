#include <gtest/gtest.h>
#include "GrassObject.hpp"

char GrassObject::s_currentVisual = 177;
char GrassObject::s_nextVisual = 178;

struct GrassObjectTests : public ::testing::Test {};

TEST_F(GrassObjectTests, assertProperVisualChange) {
  GrassObject testGrass;
  ASSERT_EQ(testGrass.getVisual(), GrassObject::s_currentVisual);
  GrassObject::visualChange();
  ASSERT_EQ(testGrass.getVisual(), GrassObject::s_nextVisual);
  testGrass.performAction();
  ASSERT_EQ(testGrass.getVisual(), GrassObject::s_currentVisual);
}
