#include<iostream>
using namespace std;
class Rectangle{
private:
int length,breadth,area1;

public:
void input()
{
    cout<<"Enter the Length";
    cin>>length;
    cout<<"Enter the breadth";
    cin>>breadth;
}

void area();

};

void Rectangle::area()
{
    area1=length*breadth;
    cout<<"The area of rectangle is "<<area1;
}

int main() {

Rectangle obj;
obj.input();
obj.area();


return 0;
}