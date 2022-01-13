#include <string>
#include <limits>

int findShort(std::string str) {
  int minWordLength = std::numeric_limits<int>::max();
  int wordLength = 0;
  for(char& c: str) {
    if(c != ' ') {
      wordLength++;
    } else {
      if(wordLength < minWordLength) {
        minWordLength = wordLength;
      }
      wordLength = 0;
    }
  }
  // check the last word
  if(wordLength < minWordLength) {
    minWordLength = wordLength;
  }
  return minWordLength;
}