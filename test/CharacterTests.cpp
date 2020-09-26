#include <gtest/gtest.h>
#include "Character.hpp"

struct CharacterTests : public ::testing::Test {};

TEST_F(CharacterTests, assertThatReturnValidVisual) {
  // Given
  char vis = 'c';
  // When
  Character testChar(vis);
  // Then
  ASSERT_EQ(testChar.getVisual(), vis);
}
