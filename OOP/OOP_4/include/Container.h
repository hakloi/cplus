#pragma once

#include <vector>
#include <iostream>
#include <stdexcept>

// Определить чисто-виртуальные методы:
// print - выводит элементы на экран
// rprint - выводит элементы на экран в обратном порядке
// add - добавляет элемент в конец (или в позицию, определяемую реализацией)
// remove - удаляет все вхождения заданного элемента
// get - получить элемент в заданной позиции

class Container
{
public:
    //functions
    virtual void print() = 0;
    virtual void rprint() = 0;
    virtual void add(int value) = 0;
    virtual void remove(int value) = 0;
    virtual int get(size_t index) = 0;

    //virtual destructor - used to avoid undefined behavior
    virtual ~Container() = default;
};