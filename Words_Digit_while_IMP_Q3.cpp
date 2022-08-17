//ENter a number and print it in words
#include<iostream>
using namespace std;
int main() {
int num,rem,sum=0;

cout<<"Enter the number which you want in words";
cin>>num;
//reversed the number first
while(num>0)
{
rem=num%10;
sum=sum*10 +rem;
num=num/10;
}
//After reversing the number traverse the numbers one by one and use switch statememt  
int rev,rem_rev,temp=0;
rev=sum;

while(rev>0)
{
rem_rev=rev%10;
switch(rem_rev)
{
    case 0: cout<<"Zero";
        break;
    case 1: cout<<"One";
        break;
    case 2: cout<<"Two";
        break;
    case 3: cout<<"Three";
        break;
    case 4: cout<<"Four";
        break;
    case 5: cout<<"Five";
        break;
    case 6: cout<<"Six";
        break;
    case 7: cout<<"Seven";
        break;
    case 8: cout<<"Eight";
        break;
    case 9: cout<<"Nine";
                                            
}
rev=rev/10;
}
return 0;
}