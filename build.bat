@echo off

@REM подготовка проекта
if not exist bin\main\cpp (
    mkdir bin\main\cpp
)

@REM сборочные шаги
g++ -std=c++17 -c src\main\cpp\main.cpp -o bin\main\cpp\main.o
