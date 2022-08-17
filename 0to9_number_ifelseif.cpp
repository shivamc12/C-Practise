//Print the 0-9 digits in words using if - else if - else
#include<iostream>
using namespace std;
int main() {

int num;

cout<<"Enter a number between 0-9"<<endl;
cin>>num;

if(num==0)
{
    cout<<"Zero";
}
else if(num==1)
{
    cout<<"One";
}
else if(num==2)
{
    cout<<"Two";
}
else if(num==3)
{
    cout<<"Three";
}
else if(num==4)
{
    cout<<"Four";
}
else if(num==5)
{
    cout<<"Five";
}
else if(num==6)
{
    cout<<"Six";
}
else if(num==7)
{
    cout<<"Seven";
}
else if(num==8)
{
    cout<<"Eight";
}
else if(num==9)
{
    cout<<"Nine";
}

else
{
    cout<<"The Number you have entered is not between 0-9";
}
return 0;
}