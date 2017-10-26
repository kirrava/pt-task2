#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "catttttttttttttt\n"; }
    ~Base() { cout << "Destruct Base object\n"; }

    virtual void func() const { cout << "Function func() of class Base\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "Construct Child object\n"; }
    ~Child() { cout << "Destruct Child object\n"; }

    void func() const { cout << "Function func() of class Child\n"; }
};

void Function(const Base &obj)
{
    cout << "meow" << endl;
    obj.func();
}

int main(int argc, char *argv[])
{
    cout << "* Create Object base" << endl;
    Base base;

    cout << "* Create Object child" << endl;
    Child child;

    cout << "* Call method func() for object base" << endl;
    Function(base);

    cout << " meow in v0.1" << endl;
    Function(child);

    return 0;
}
