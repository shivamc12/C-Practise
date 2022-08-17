#include<iostream>
#include<string>
using namespace std;
class RBI{

public:
int min_limit,rupees;
void limit()
{
    cout<<"Enter the amount you want to deposit to account"<<endl;
    cin>>rupees;
    if (rupees<10000)
    {
        cout<<"The minimum amount is 10000"<<endl;
    }
    else
    {
        cout<<"You can create account"<<endl;
    }
}
};

class HDFC:public RBI
{
public:
int acc_num;
string name;
void details()
{
    cout<<"Enter your name ";
    cin>>name;
    cout<<"Enter your account number ";
    cin>>acc_num; 
}

};

class IDFC:public HDFC
{

};
int main() {

HDFC obj;
obj.limit();

IDFC ob;
ob.details();
ob.limit();

return 0;
}