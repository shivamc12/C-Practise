//input two numbers and print the biggest one
#include<iostream>
using namespace std;
int main() {

int num1,num2;

cout<<"Enter the two numbers you want to compare"<<endl;
cin>>num1>>num2;

if(num1>num2)
{
    cout<<"The First number is greater "<<num1;
}

else if(num1<num2)
{
    cout<<"The Second number is greater "<<num2;
}

else
{
    cout<<"The numbers are equal";
}

return 0;
}