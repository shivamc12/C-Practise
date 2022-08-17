#include<iostream>
using namespace std;
int main() {

int i,j,temp;
int arr[3]={9,2,0};

for(i=0;i<3;i++)
{
    for(j=i+1;j<3;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

for(i=0;i<3;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}