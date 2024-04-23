#include "TeleCo.h"
#include <gtest/gtest.h>

TEST(TeleColorSuite,GivenMajorandMinorColor){
    //Arrangee
     int input=4;
    int expectedValue=0;
    //Act
   ColorPair actualValue= GetColorFromPairNumber(input);
    //Assert
    MajorColor majorColor = actualValue.getMajor();
   MinorColor minorColor = actualValue.getMinor();
    std::cout << minorColor;
    
  //ColorPair expectedValue=actualValue;
    //ASSERT_EQ(actualValue,expectedValue);
}
