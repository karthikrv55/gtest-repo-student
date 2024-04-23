#include "TeleCo.h"
#include <gtest/gtest.h>

TEST(TeleColorSuite,GivenMajorandMinorColor){
    //Arrangee
    ColorPair objUnderTest;
    string input="";
    int expectedValue=0;
    //Act
   ColorPair actualValue= objUnderTest.GetColorFromPairNumber(input);
    //Assert

  //ColorPair expectedValue=actualValue;
    //ASSERT_EQ(actualValue,expectedValue);
}
