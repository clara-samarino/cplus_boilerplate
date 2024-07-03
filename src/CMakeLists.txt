# Adicionar o executável do projeto principal
add_executable(main main.cpp)

# Adicionar o executável de teste
add_executable(tests_math_bla 
math_bla/math_functions.test.cpp math_bla/math_functions.cpp)

# Linkar Google Test e o projeto principal aos testes
target_link_libraries(tests_math_bla gtest gtest_main)
enable_testing()
add_test(NAME math_bla_test COMMAND tests_math_bla)

