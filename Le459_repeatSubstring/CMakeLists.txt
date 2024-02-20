cmake_minimum_required(VERSION 3.0)
project(test_le459)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)

# 查找 gtest 包
find_package(GTest QUIET)

# 如果找到 gtest 包，则添加测试
if(GTEST_FOUND)
    enable_testing()
    add_executable(${PROJECT_NAME} test_le459.cpp Solution.cpp)
    include_directories(${GTEST_INCLUDE_DIRS})
    target_link_libraries(${PROJECT_NAME} GTest::GTest GTest::Main)
else()
    message("GTest not found, test will not be added")
endif()



