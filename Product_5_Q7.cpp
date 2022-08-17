//Product of all no upto 5
#include<iostream>
using namespace std;
int main() {

int i,product=1;

for(i=1;i<=5;i++)
{
    product=product*i;
}

cout<<product;
return 0;
}