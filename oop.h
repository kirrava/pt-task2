#ifndef oop_h
#defline oop_h
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
#endif
