#include<iostream>
using namespace std;

class Box{

private:
int length,breadth,height,Area,Volume;

public:
void input()
{
    cout<<"Enter the length,breadth and height"<<endl;
    cin>>length>>breadth>>height;
}

void area();
void volume();
};

void Box::area()
{
    Area=(2*length*breadth)+(2*length*height)+(2*height*breadth);
    cout<<"The Area of box is "<<Area<<endl;
}

void Box::volume()
{
    Volume=length*breadth*height;
    cout<<"The volume of box is "<<Volume;
}

int main() {

Box b1;
b1.input();
b1.area();
b1.volume();
return 0;
}