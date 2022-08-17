//Ask user to enter a number to Add,Subtract,Multiply and Divide.
#include<iostream>
#include<string>
using namespace std;
int main() {

int add,sub,mul,div,choice;
int num1,num2;
int s;

do{



if(choice==1)
{
    add=num1+num2;
    cout<<"The Addition of numbers is :"<<add<<endl;
}
else if (choice==2)
{
    sub=num1-num2;
    cout<<"The Subtraction of number is :"<<sub<<endl;
}
else if (choice==3)
{
    mul=num1*num2;
    cout<<"The Multiplication of number is :"<<mul<<endl;
}
else if (choice==4)
{

    div=(float)num1/num2;
    cout<<"The Division of number is :"<<div<<endl;
}

cout<<"Enter 2 numbers"<<endl;
cin>>num1>>num2;

cout<<"Press 1 for Addition"<<endl;
cout<<"Press 2 for Subtraction"<<endl;
cout<<"Press 3 for Multiplication"<<endl;
cout<<"Press 4 for Division"<<endl;
cout<<"Press 0 to exit";
cin>>choice;


}while(choice!=0);

return 0;
}