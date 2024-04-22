#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,GivenEmptyStringZeroIsExpected){
    //Arrangee
    StringCalculator objUnderTest;
    string input="";
    int expectedValue=0;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
