#include <unordered_map>
using namespace std;

size_t duplicateCount(const char* in){
    unordered_map<char, int> hash;
    int ans = 0;
    for(int i = 0; in[i] != '\0'; ++i) {
      char key = in[i];
      if('a' > in[i] || in[i] > 'z') {
        key = in[i] - 'A' + 'a';
      }
      if(hash[key] == -1) continue;
      hash[key]++;
      if(hash[key] > 1) {
        hash[key] = -1;
        ans++;
      }
    }
    return ans;
}
