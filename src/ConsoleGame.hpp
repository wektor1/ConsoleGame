#pragma once
#include <array>
#include <ostream>

class ConsoleGame {
 private:
  const int m_width = 48;
  const int m_hight = 32;
  std::array<std::array<char, 48>, 32> m_gameScrean;

  std::ostream DrawScrean();
  void DrawGame(std::ostream gameScrean);

 public:
  ConsoleGame();
  ~ConsoleGame();
  void RunGame();
};
