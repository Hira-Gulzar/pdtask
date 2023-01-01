#include <iostream>
using namespace std;
void printMenu();
void calculateAggregate1( string stdname1, int matricmarksstd1, int intermarksstd1, int ecatmarksstd1);
void calculateAggregate2( string stdname2, int matricmarksstd2, int intermarksstd2, int ecatmarksstd2);
void compareMarks(string stdname1, int ecatmarksstd1, string stdname2, int ecatmarksstd2);
main()
{
string stdname1;
int matricmarksstd1;
int intermarksstd1;
int ecatmarksstd1;
string stdname2;
int matricmarksstd2;
int intermarksstd2;
int ecatmarksstd2;
int selection;
string key;

while(true)
{
system("cls");
printMenu();
cout << "enter selection:";
cin >> selection;
if(selection== 1)
 {
system("cls");
cout << " enter first student name:";
cin >> stdname1;
cout << " enter matric marks of student(out of 1100):";
cin >> matricmarksstd1;
cout << " enter intermediate marks of student(out of 550):";
cin >> intermarksstd1;
cout << " enter ecatmarks of student(out of 400):";
cin >> ecatmarksstd1;
cout << " enter any key to continue:";
cin >> key;
 }
if(selection == 2)
 {
system("cls");
cout << " enter second student name:";
cin >> stdname2;
cout << " enter matric marks of student(out of 1100):";
cin >> matricmarksstd2;
cout << " enter inter marks of student(out of 550):";
cin >> intermarksstd2;
cout << " enter ecatmarks of student(out of 400):";
cin >> ecatmarksstd2;
cout << " enter any key to continue:";
cin >>  key;
 }
if(selection == 3)
 {
system("cls");
calculateAggregate1(stdname1, matricmarksstd1, intermarksstd1, ecatmarksstd1);
cout << "press any key to continue:";
cin >> key;
 }
if(selection == 4)
 {
system("cls");
calculateAggregate2(stdname2, matricmarksstd2, intermarksstd2, ecatmarksstd2);
cout << " press any key to continue:";
cin >> key;
 }
if(selection == 5)
 {
system("cls");
compareMarks(stdname1,ecatmarksstd1,stdname2,ecatmarksstd2);
cout << " press any key to continue:";
cin >> key;
 }
}
}
void printMenu()
{
system("cls");
cout << "************************************" << endl;
cout << "* University Admission Management  *" << endl;
cout << "*           System                 *" << endl;
cout << "*                                  *" << endl;
cout << "*                                  *" << endl;
cout << "************************************" << endl;
cout << "                                     " << endl;
cout << " Welcome To UET Admission Management system" << endl;
cout << "                                            " << endl;
cout << " Press 1 to Enter the detail of first student!" << endl;
cout << " Press 2 to Enter the detail of second student!" << endl;
cout << " Press 3 to Calculate the aggregate of first student!" << endl;
cout << " Press 4 to Calculate the aggregate of second student!" << endl;
cout << " Press 5 to display the student with RollNumber 01" << endl;
}
void calculateAggregate1(string stdname1, int matricmarksstd1, int intermarksstd1, int ecatmarksstd1)
{
float percentagematric1;
float percentageinter1;
float percentageecat1;
float weightmatric1;
float weightinter1;
float weightecat1;
float aggregate1;
percentagematric1 = (matricmarksstd1/1100.0)*100;
percentageinter1 = (intermarksstd1/550.0)*100;
percentageecat1 = (ecatmarksstd1/400.0)*100;
weightmatric1 = (percentagematric1*10)/100;
weightinter1 = (percentageinter1*40)/100;
weightecat1 = (percentageecat1*50)/100;
aggregate1 = (weightmatric1) + (weightinter1) + (weightecat1);
cout << " aggregate is ";
cout << aggregate1;
}
void calculateAggregate2(string stdname2, int matricmarksstd2, int intermarksstd2, int ecatmarksstd2)
{
float percentagematric2;
float percentageinter2;
float percentageecat2;
float weightmatric2;
float weightinter2;
float weightecat2;
float aggregate2;
percentagematric2 = (matricmarksstd2/1100.0)*100;
percentageinter2 = (intermarksstd2/550.0)*100;
percentageecat2 = (ecatmarksstd2/400.0)*100;
weightmatric2 = (percentagematric2*10)/100;
weightinter2 = (percentageinter2*40)/100;
weightecat2 = (percentageecat2*50)/100;
aggregate2 = (weightmatric2) + (weightinter2) + (weightecat2);
cout << " aggregate is ";
cout << aggregate2;
}
void compareMarks(string stdname1, int ecatmarksstd1, string stdname2, int ecatmarksstd2)
{
system("cls");
if(ecatmarksstd1 > ecatmarksstd2)
{
cout << "Rollno01 is the rollno of";
cout << stdname1;
}
if(ecatmarksstd1 < ecatmarksstd2)
{
cout << "Rollno01 is the rollno of";
cout << stdname2;
 }
}







