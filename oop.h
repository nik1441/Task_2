#include <iostream>
using namespace std;
#ifndef OOP_H
#define OOP_H


class Base
{
public:
    Base();
    ~Base();
    void func() const;
};

class Child: public Base
{
public:
    Child();
    ~Child();
    void func() const;
};
void Function(const Base &obj);
#endif // OOP_H
