#include<iostream>
using namespace std;

class Base{
    public:

    virtual void show()
    {
        cout<<"Base class";
    }
   
};

class Derived:public Base
{
    public:
    void show()
    {
        cout<<"This fuction is derived class";
    }
};

int main() {

Base *ptr;
Derived d;
ptr=&d;

ptr->show();


return 0;
}