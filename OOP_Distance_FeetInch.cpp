#include<iostream>
using namespace std;

class Distance{

private:
int feet,inch;

public:
void input();
void output();

};

void Distance::input()
{
    cout<<"Enter the Distance in Feet";
    cin>>feet;
}
void Distance::output()
{
    inch=feet*12;
    cout<<"The Distance in inch is "<<inch;
}


int main() {

Distance ob;
ob.input();
ob.output();

return 0;
}