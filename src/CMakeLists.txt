# Adicionar o executável do projeto principal
add_executable(main main.cpp)

# Adicionar o executável de teste
add_executable(tests_ test_math_functions.cpp math_functions.cpp)

# Linkar Google Test e o projeto principal aos testes
target_link_libraries(tests_ gtest gtest_main)
enable_testing()
add_test(NAME example_test COMMAND tests_)

