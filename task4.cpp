#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x , int y);
void printName1();
void printName2();
void printName3();
void printName4();
void printName5();
main()
{
system("cls");
printName1();
cout << endl;
printName2();
cout << endl;
printName3();
cout << endl;
printName4();
cout << endl;
printName5();
cout << endl;
}
void printName1()
{
cout << "   *       " << endl;
cout << "   *       " << endl;
cout << "   *       " << endl;
cout << "   *       " << endl;
cout << "   ********" << endl;
}
void printName2()
{
cout << "     *    " << endl;
cout << "    * *   " << endl;
cout << "   *****  " << endl;                               
cout << "  *     * " << endl;
cout << " *       *" << endl;
}
void printName3()
{
cout << "   *******  " << endl;
cout << "      *     " << endl;
cout << "      *     " << endl;
cout << "      *     " << endl;
cout << "   *******  " << endl;
}
void printName4()
{
cout << "    ****  " << endl;
cout << "    *   *  " << endl;
cout << "    *****  " << endl;
cout << "    *   *  " << endl;
cout << "    ****   " << endl;
}
void printName5()
{
cout << "    * " << endl;
cout << "   * * " << endl;
cout << "  *****  " << endl;
cout << " *     * " << endl;
}
void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}