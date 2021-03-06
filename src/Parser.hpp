#include "Definitions.hpp"

#ifndef PARSER_HPP
#define PARSER_HPP

class Parser
{
public:
  board_t parseBoard();
  int parseSearchDepth();
  int parseWaterLevel();
private:
  int parseInt();
};

#endif
