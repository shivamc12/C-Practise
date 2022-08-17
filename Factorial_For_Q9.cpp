//Input a number and print its factorial
#include<iostream>
using namespace std;
int main() {
int num,i,fact=1;

cout<<"Enter the number you want the factorial";
cin>>num;

for(i=1;i<=num;i++)
{
    fact=fact*i;
}
cout<<fact;

return 0;
}