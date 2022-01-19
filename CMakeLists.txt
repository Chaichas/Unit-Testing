cmake_minimum_required(VERSION 3.10)

# set the project name
project(mylib)

# enable modern C++
#set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-fvisibility=hidden") # Etape5 (Bonus 1), option "-fvisibility=hidden" to desactivate the automatic export of symboles


find_package(mylib CONFIG REQUIRED) #  mylib_LIBRARIES, config mode, Etape 6 (Bonus 2)
#include_directories("${MYLIB_INCLUDE_DIR}")

# add the executable
add_executable(Main.exe main.cpp)

# link the executable to library
target_link_libraries(Main.exe mylib)

#target_include_directories(Main.exe PUBLIC "${MYLIB_INCLUDE_DIR}")
#Etape6
 

enable_testing()
add_test(NAME mytest
         COMMAND ./Main.exe)

#GTest (Etape 3)
enable_testing()
find_package(GTest REQUIRED)
add_executable(Test.exe test.cpp) #Define a test

target_link_libraries(Test.exe GTest::GTest GTest::Main mylib)

target_include_directories(Test.exe PUBLIC
                            "mylib"
                          )
add_test(UnitTest UnitTest)

gtest_discover_tests(Test.exe)
