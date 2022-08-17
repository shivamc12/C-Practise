//Enter a number and print sum of its digits.
#include<iostream>
using namespace std;
int main() {

int num, sum=0,rem;
cout<<"Enter a number which you want the sum of its digits";
cin>>num;

while(num>0)
{
    rem=num%10;
    sum=sum+rem;
    num=num/10;
}
cout<<"The sum of digtis is "<<sum;
return 0;
}