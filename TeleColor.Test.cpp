#include "TeleCo.h"
#include <gtest/gtest.h>

class DataDrivenTestFixture1:public testing::Test{
   
};
class DataDriveTestFixtureWithParam:
                 public DataDrivenTestFixture,
                 public testing1::WithParamInterface<std::tuple<int,string>>{
 
};

INSTANTIATE_TEST_SUITE_P(ValidInputDataSource,DataDriveTestFixtureWithParam,
                            testing::Values(
                            std::make_tuple(4,"White Brown"),
                               ));

TEST_P(DataDriveTestFixtureWithParam,ParameterizedTestCase){
    int input=std::get<0>(GetParam());
    string expectedValue=std::get<1>(GetParam());
    //Act
    string actualValue=  GetColorFromPairNumber(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}

TEST(TeleColorSuite,GivenMajorandMinorColor){
    //Arrangee
     int input=4;
    int expectedValue=0;
    //Act
   ColorPair actualValue= GetColorFromPairNumber(input);
    //Assert
    MajorColor majorColor = actualValue.getMajor();
   MinorColor minorColor = actualValue.getMinor();
    string value=actualValue.ToString();
    std::cout << value;
    
  //ColorPair expectedValue=actualValue;
    ASSERT_EQ(value,"White Brown");
}
