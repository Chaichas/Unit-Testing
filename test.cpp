#include "gtest/gtest.h"
#include "mylib.h"
#include <iostream>
#include <cassert>

/* Test1: Test case MylibTestPrintTest, of type UnitTest:
Create an instance of Mylib::MyClass and test print method*/
TEST(UnitTest, MylibTestPrintTest){  
  MyLib::MyClass a{};
  a.print();
}


// Test2: Test of a new method returning an integer
TEST(valuteTest, ReturnInt){ 

	MyLib::MyClass a{};	
	EXPECT_EQ(a.value(2),2);
	EXPECT_EQ(a.value(100),3);
}
