//Print 1-100 and stop the screen on every 20th number (message,press any key)
#include<iostream>
using namespace std;
int main() {

int i,counter=0,num;

for(i=1;i<=100;i++)
{
    cout<<i<<endl;
    counter++;
    if (counter==20)
    {
        cout<<"Press any key to continue"<<endl;
        cin.get();
        counter=0;
    }
    
}

return 0;
}