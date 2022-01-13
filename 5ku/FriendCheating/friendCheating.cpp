#include <vector>

using namespace std;

class RemovedNumbers
{
public:
  static vector<vector<long long>> removNb(long long n);
};

vector<vector<long long>> RemovedNumbers:: removNb(long long n) {
  vector<vector<long long>> result {};
  long long sum = n * (n + 1) / 2;
  for(long long b = n; b > 0; --b) {
    if((sum - b) % (b + 1) == 0 ) {
      long long a = (sum - b) / (b+1);
      if (a < n)
        result.push_back(vector<long long>{a,b});
    }
  }
  return result;
}
