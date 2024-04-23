#include <string>
#include <vector>
#include <numeric>
#include <regex>

using namespace std;

class ColorPairIn extends ColorPair{
public:
	 ColorPair GetColorFromPairNumber(int pairNumber);
         int GetPairNumberFromColor(MajorColor major, MinorColor minor);
};
