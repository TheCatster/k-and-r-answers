cmake_minimum_required(VERSION 3.20)
project(k-and-r VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-Wall -g)

set(CHAPTER_ONE ${CMAKE_CURRENT_SOURCE_DIR}/chapter-one)

# Chapter One Executables
add_executable(one-one ${CHAPTER_ONE}/one.c)
add_executable(one-two ${CHAPTER_ONE}/two.c)
add_executable(one-three ${CHAPTER_ONE}/three.c)
add_executable(one-four ${CHAPTER_ONE}/four.c)
add_executable(one-five ${CHAPTER_ONE}/five.c)
add_executable(one-six ${CHAPTER_ONE}/six.c)
add_executable(one-seven ${CHAPTER_ONE}/seven.c)
add_executable(one-eight ${CHAPTER_ONE}/eight.c)
add_executable(one-nine ${CHAPTER_ONE}/nine.c)
add_executable(one-ten ${CHAPTER_ONE}/ten.c)
add_executable(one-eleven ${CHAPTER_ONE}/eleven.c)
add_executable(one-twelve ${CHAPTER_ONE}/twelve.c)
add_executable(one-thirteen ${CHAPTER_ONE}/thirteen.c)
add_executable(one-fourteen ${CHAPTER_ONE}/fourteen.c)
