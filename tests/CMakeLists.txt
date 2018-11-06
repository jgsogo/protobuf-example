
find_package(GTest REQUIRED)

add_executable(testlib tests.cpp)
target_link_libraries(testlib library GTest::GTest GTest::Main)
add_test(testlib testlib)
set_target_properties(testlib PROPERTIES FOLDER tests)

