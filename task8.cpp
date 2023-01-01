#include <iostream>
using namespace std;
void challan(int speed);
main()
{
int speed;
cout << " enter speed:";
cin >> speed;
challan(speed);
}
void challan(int speed)
{
if(speed == 100)
 {
cout << "you will be challanged";
 }
if(speed != 100)
 {
cout << "perfect! you are going good";
 }
}
