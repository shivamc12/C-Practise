//input 4 digit number and print sum of its digits
#include<iostream>
using namespace std;
int main() {

int num,sum=0,rem;
cout<<"Enter the 4 digits number";
cin>>num;

rem=num%10;
sum=sum+rem;
num=num/10;

rem=num%10;
sum=sum+rem;
num=num/10;

rem=num%10;
sum=sum+rem;
num=num/10;

sum=sum+num;

cout<<sum;;
return 0;
}