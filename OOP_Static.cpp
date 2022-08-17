#include<iostream>
using namespace std;

class Refrigrator
{
private:
int s_no;
char color[10];
static int price;
static int counter;

public:

void input()
{
    s_no=counter++;
    cout<<"Enter color ";
    cin>>color;
}
void output()
{
    cout<<" The serial number is "<<s_no<<endl;
    cout<<" The color is "<<color<<endl;
    cout<<" The price is "<<price<<endl;
}

static void hike(int per)
{
    int hp;
    hp=price*per/100;
    price=price+hp;
}

};

int Refrigrator::price=2000;
int Refrigrator::counter=101;

int main() {

Refrigrator lg;
lg.input();
lg.output();

cout<<"After pice hike";

Refrigrator::hike(10);

lg.output();
return 0;
}