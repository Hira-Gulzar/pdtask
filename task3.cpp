#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printName();
int main()
{ 
system("cls");
printName();
}
void printName()
{
gotoxy(20,1);
cout << "  *          *     *****  ****      *    " << endl;
gotoxy(20,2);
cout << "  *         * *      *    *   *    * *  " << endl;
gotoxy(20,3);
cout << "  *        *****     *    ****    *****  " << endl;
gotoxy(20,4);
cout << "  *       *     *    *    *   *  *     *  " << endl;
gotoxy(20,5);
cout << "  ****** *       * *****  ****  *       * " << endl;
}
void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
