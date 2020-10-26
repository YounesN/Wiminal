//
// This is the main file that will run wiminal
//

#include "src/parser/argument_parser.hpp"
#include "src/gui/wiminal.hpp"

int main(int arc, const char *argv[])
{
  ArgumentParser arg_parse(argv);
  Wiminal wiminal(arg_parse);
  wiminal.run();

  return 0;
}