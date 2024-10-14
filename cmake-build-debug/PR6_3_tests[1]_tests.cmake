add_test([=[SumTest.HandleSum]=]  [==[/Users/yura_kulakovskyi/Documents/C++/AP/PR6/PR6_3_rec/cmake-build-debug/PR6_3_tests]==] [==[--gtest_filter=SumTest.HandleSum]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[SumTest.HandleSum]=]  PROPERTIES WORKING_DIRECTORY [==[/Users/yura_kulakovskyi/Documents/C++/AP/PR6/PR6_3_rec/cmake-build-debug]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  PR6_3_tests_TESTS SumTest.HandleSum)
