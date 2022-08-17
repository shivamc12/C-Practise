#include<iostream>
using namespace std;
int main() {

int arr[10]={0,1,2,3,4,5,6,7,8,9};
int i,sum;

for(i=0;i<=9;i++)
{
if(arr[i]%2==0)
{
    cout<<arr[i];
}
}

return 0;
}