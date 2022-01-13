#include <string>
#include <iterator>
#include <algorithm>


std::string no_space(std::string x) {
  std::string result;
  copy_if(x.cbegin(), x.cend(), std::back_inserter(result),
          [](char c) {return c != ' ';});
  return result;
}