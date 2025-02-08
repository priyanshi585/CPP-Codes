#include <iostream>
using namespace std;

class A
{
private:
    void show()
    {
        cout << "A called." << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "B called." << endl;
        show();
    }
};

int main()
{
    A a1;
    B b1;
    a1.show();
    b1.show();
    b1.display();
    return 0;
}