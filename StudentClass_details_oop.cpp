/*
1st - input the details including marks
2nd - total function in which we will calculate the total marks
3rd - then we will 
*/
#include<iostream>
#include<string>
using namespace std;

class Student{
private:
int roll_no,english,hindi,math,average,num,temp;
string name;

public:
void details()
{
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your Roll NO."<<endl;
    cin>>roll_no;
    cout<<"Enter your marks of English,Hindi and Maths"<<endl;
    cin>>english>>hindi>>math;
}
void details_show();
void number()
{
 temp=0;
 if (num>temp)
 {
     temp=num;

 } 
}
void marks()
{
    cout<<"The highest marks is "<<temp;
}
};

void Student::details_show()
{

    average=(english+hindi+math)/3;
    cout<<"Your name is "<<name<<endl;
    cout<<"Your Roll No. is "<<roll_no<<endl;
    cout<<"Your marks in english,hindi and math are "<< english <<" "<< hindi <<" "<< math <<endl;
    cout<<"Your Average marks is "<<average<<endl;
     average=num;

}

int main() {
int i;
Student arr[2];
for(i=0;i<=1;i++)
{
arr[i].details();
arr[i].details_show();

}

for(i=0;i<=1;i++)
{
arr[i].number();
arr[i].marks();
}

return 0;
}