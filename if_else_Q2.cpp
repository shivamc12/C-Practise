//Input sale price and cost price and print profit and loss.
#include<iostream>
using namespace std;
int main() {

int sale_price,cost_price,profit,loss;

cout<<"Enter the Sale price of the product ";
cin>>sale_price;

cout<<"Enter the Cost Price of the product ";
cin>>cost_price;

if(sale_price>cost_price)
{
    profit=sale_price - cost_price;
    cout<<"Profit of Rs"<<profit;
}

else
{
    loss=cost_price - sale_price;
    cout<<"Loss of Rs"<<loss;
}

return 0;
}