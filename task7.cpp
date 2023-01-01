#include <iostream>
using namespace std;
void finalPrice(string name , int dollars);
main()
{
string name;
int dollars;
cout << "enter country name:";
cin >> name;
cout << " enter ticket price in dollars:";
cin >> dollars;
finalPrice(name , dollars);
}
void finalPrice(string name , int dollars)
{
int discount;
int totalprice;
if(name == "pakistan")
{
discount = (dollars * 5)/100;
}
if(name == "ireland")
{
discount = (dollars*10)/100;
}
if(name == "india")
{
discount = (dollars*20)/100;
}
if(name == "england")
{
discount = (dollars*30)/100;
}
if(name == "canada")
{
discount = (discount*45)/100;
}
totalprice = dollars-discount;
cout << " total price:" << totalprice;
}
