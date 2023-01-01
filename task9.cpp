#include <iostream>
using namespace std;
void flowerPrice(float totalprice, float afterdiscount);
main()
{
int redrose;
int whiterose;
int tulips;
float totalprice;
float afterdiscount;
cout << " enter redrose:";
cin >> redrose;
cout << " enter whiterose:";
cin >> whiterose;
cout << " enter tulips:";
cin >> tulips;
flowerPrice(totalprice , afterdiscount);
}
void flowerPrice(float totalPrice, float afterddiscount)
{
float discount;
float totalprice;
float afterdiscount;
float priceofred;
float priceofwhite;
float priceoftulips;
int redrose;
int whiterose;
int tulips;
if(totalprice > 200)
{
discount = (totalprice * 20)/100;
}
priceofred=(redrose*2.00);
priceofwhite=(whiterose*4.10);
priceoftulips=(tulips*2.50);
totalprice = priceofred + priceofwhite + priceoftulips;
cout << " total price:" << totalprice << endl;
afterdiscount = totalprice - discount;
cout << " price after discount:" << afterdiscount;
}
