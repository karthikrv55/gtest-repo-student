#include <string>
#include <vector>
#include <numeric>
#include <regex>

using namespace std;

Interface ColorPairin Implements ColorPair{
public:
	 ColorPair GetColorFromPairNumber(int pairNumber);
         int GetPairNumberFromColor(MajorColor major, MinorColor minor);
};
