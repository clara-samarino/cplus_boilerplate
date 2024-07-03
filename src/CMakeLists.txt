# Adicionar o executável do projeto principal
add_executable(MyProject main.cpp)

# Adicionar o executável de teste
add_executable(test_example test_math_functions.cpp math_functions.cpp)

# Linkar Google Test e o projeto principal aos testes
target_link_libraries(test_example2 gtest gtest_main)
enable_testing()
add_test(NAME example_test COMMAND test_example)

