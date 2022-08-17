#include<iostream>
using namespace std;
int main() {
int m,n,i,product=1;

cout<<"Enter the value of m and n "<<endl;
cin>>m>>n;

for(i=1;i<=n;i++)
{
    product=product*m;
}
cout<<product;
return 0;
}