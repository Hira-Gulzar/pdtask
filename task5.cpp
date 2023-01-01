#include <iostream>
#include <windows.h>
using namespace std;
void isEqual(int integer1 ,int integer2);
main()
{
int integer1;
int integer2;
cout << " Enter first integer:";
cin >> integer1;
cout << "enter second integer:";
cin >> integer2;
isEqual(integer1 , integer2);
}
void isEqual(int integer1,int integer2)
{
if(integer1 == integer2)
  {
  cout << "true";
  }
if(integer1 != integer2)
  {
  cout << "false";
  }
}
