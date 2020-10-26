#ifndef WIMINAL_PARSER_PARSER_HPP_
#define WIMINAL_PARSER_PARSER_HPP_

// This class will take the terminal inputs from main and parses it
class ArgumentParser {
 public:
  // Constructor of ArgumentParser will read through the arguments and sets the
  // "status"
  ArgumentParser(const char *argv[], int argc) {
    raw_argc = argc;
  }

  int GetRawArgc() { return raw_argc; }

 private:
  int raw_argc;
};

#endif // WIMINAL_PARSER_PARSER_HPP_