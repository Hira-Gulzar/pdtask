#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void playerVertical(int x, int y);
void printMaze();

main()
{
    system("cls");
    printMaze();
    int x= 2;
    int y= 2;
    while(true)
    {
    playerVertical(x,y);
    if(y < 8)
    {
    y = y+1;
    }
    if(y==8) 
    {
      gotoxy(x, y-1);
      cout << " ";
      y = 2;
    }
   }
}
void printMaze()
{
   cout << " #################################### " << endl;
   cout << " #                                  # " << endl;
   cout << " #                                  # " << endl;
   cout << " #                                  # " << endl;
   cout << " #                                  # " << endl;
   cout << " #                                  # " << endl;
   cout << " #                                  # " << endl;
   cout << " #                                  # " << endl;
   cout << " #################################### " << endl;
}
void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void playerVertical(int x, int y)
{
          gotoxy(x, y-1);
          cout << "  ";
          gotoxy(x, y);
          cout << "P";
          Sleep(200);
}

