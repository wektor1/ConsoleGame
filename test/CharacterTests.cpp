#include <gtest/gtest.h>
#include "Character.hpp"

const char vis = 'c';

struct CharacterTests : public ::testing::Test {
 protected:
  void SetUp() override  {}

 public:
  CharacterTests() : testChar(vis) {}
  ~CharacterTests() {}
  Character testChar;
};

TEST_F(CharacterTests, assertThatReturnValidVisual) {
  ASSERT_EQ(testChar.getVisual(), vis);
}

TEST_F(CharacterTests, assertCorrectSetVisual) {
  char newVis = 'a';
  testChar.setVisual(newVis);
  ASSERT_EQ(testChar.getVisual(), newVis);
}
