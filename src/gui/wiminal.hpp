#ifndef WIMINAL_GUI_WIMINAL_HPP_
#define WIMINAL_GUI_WIMINAL_HPP_

#include <iostream>

#include "src/parser/argument_parser.hpp"

class Wiminal {
 public:
  Wiminal(const ArgumentParser &arg) : arg_parser(arg) {
  }
  void run() { std::cout << "Ran!\n"; }

 private:
  const ArgumentParser &arg_parser;
};

#endif // WIMINAL_GUI_WIMINAL_HPP_