#include <string>
#include <vector>
#include <numeric>
#include <regex>

using namespace std;

class ColorPairIn {
public:
	 ColorPair GetColorFromPairNumber(int pairNumber);
  int GetPairNumberFromColor(MajorColor major, MinorColor minor);
};
