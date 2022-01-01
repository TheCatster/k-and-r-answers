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
