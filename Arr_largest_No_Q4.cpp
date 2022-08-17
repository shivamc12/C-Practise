#include<iostream>
using namespace std;
int main() {

int arr[10]={0,1,2,3,4,9,6,7,8,5};
int i,large=0;

for(i=0;i<=9;i++)
{
if (arr[i]>arr[i+1])
{
    if (large<arr[i])
    {
    large=arr[i];
    }
}
}
cout<<large;

return 0;
}