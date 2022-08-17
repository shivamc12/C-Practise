//input 4 digit number and print its reverse
#include<iostream>
using namespace std;
int main() {

int rem,num=0,num1=0,num2=0,num3=0,num4=0;

cout<<"Enter the 4 digits number";
cin>>num;

rem=num%10;
num1=rem;
num=num/10;

rem=num%10;
num2=rem;
num=num/10;

rem=num%10;
num3=rem;
num=num/10;

num4=num;

cout<<num1<<num2<<num3<<num4;

return 0;
}