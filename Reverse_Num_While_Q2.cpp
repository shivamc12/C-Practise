//Enter a number and print reverse of its digits
#include<iostream>
using namespace std;

int main() {
int num,rem,sum=0;

cout<<"Enter the number which you want to reverse";
cin>>num;

while(num>0)
{
rem=num%10;
sum=sum+rem*rem*rem;
num=num/10;
}
cout<<"After reversing the number "<<sum;
return 0;
}