set(SOURCE_FILES
    sorting-test.cpp
)

add_executable(run-sorting-tests ${SOURCE_FILES} ${BACKWARD_ENABLE})
target_link_libraries(run-sorting-tests sorting utility gtest gtest_main)

add_backward(run-sorting-tests)
add_test(run-sorting-tests run-sorting-tests)
