#include<iostream>
using namespace std;
int main() {

int price,discount,net_price;

cout<<"Enter the price of Book";
cin>>price;

discount=(price*10)/100;
net_price=price-discount;

cout<<net_price;

return 0;
}