#include <iostream>
using namespace std;
void normYear(int holidays);
main()
{
int holidays;
cout << "Enter number of holidays:";
cin >> holidays;
normYear(holidays);
}
void normYear(int holidays) 
{
int workingdaysperyear;
int differenceofnorm;
int timeforgame;
workingdaysperyear = 30000-holidays;
timeforgame= (127*holidays) + (63*workingdaysperyear);
differenceofnorm = (30000-timeforgame);
if(timeforgame<= 30000)
 {
 cout << "tom sleep well" << endl;
 cout << differenceofnorm << " less for sleep";
 }
  if(timeforgame > 30000)
 {
 cout << " tom will run away" << endl;
 cout << differenceofnorm << " for play";
 }
}


