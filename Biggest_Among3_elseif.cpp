//Find out the biggest among 3 numbers using nested if-else
#include<iostream>
using namespace std;
int main() {

int num1,num2,num3;
cout<<"Enter the 3 numbers which you want to compare"<<endl;
cin>>num1>>num2>>num3;

if(num1>num2 && num1>num3)
{
    cout<<"Number 1 is Greater "<<num1;
}

else if (num2>num1 && num2>num3)
{
    cout<<"Number 2 is Greater "<<num2;
}

else
{
    cout<<"Number 3 is Greater "<<num3;
}

return 0;
}