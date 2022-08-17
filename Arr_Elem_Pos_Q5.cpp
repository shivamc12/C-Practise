#include<iostream>
using namespace std;

int main() {

int arr[10]={0,1,2,3,4,5,6,7,8,9};
int i,pos,num;
cout<<"Enter the number you want want to find in the array";
cin>>num;

for(i=0;i<10;i++)
{
    if(arr[i]==num)
    {
        cout<<"The number is found in the array at position "<<i+1;
    }

}
if (num>=10)
{
    cout<<"The number is not found in the array";
}


return 0;
}