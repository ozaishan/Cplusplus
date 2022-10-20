#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>
#include<cstring>
#include<windows.h>
using namespace std;
int login();


int main(){
    system("cls");

cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                        WELCOME TO                                     |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                   BUS MANAGEMENT SYSTEM                               |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                               Made by TeamBusBee                                      |@@\n";
cout << "\t\t\t\t\t@@|                           supervised By: Sujan Poudel                                 |@@\n";
cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";

cout << "Press any key to choose another option...";
getch();
system("cls");
login();
}
int login(){
string pass;
	char ch, fname[20];
	int i;
	pass = "";
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tBUS MANAGEMENT SYSTEM" << endl;
	cout << "\t\t\t\t\t\t\t\t\t------------------------------" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\tLOGIN\n";
	cout << "\t\t\t\t\t\t\t\t\t------------------------------\n\n";
	cout << "\t\t\t\t\t\t\t\t\tEnter Password: ";
	ch = getch();
	while(ch != 13)
	{
    	pass.push_back(ch);
    	cout << '*';
    	ch = getch();
	}
	if(pass == "admin")
	{
		system("cls");
		//cout << endl << endl;
    	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t  Access Granted!  ";
    	Sleep(1000);
   		system ("CLS");
   	}
	else
	{
		//cout << endl << endl;
		system("cls");
    	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tAccess Aborted" << endl;
		cout << "\t\t\t\t\t\t\t\t\tPlease Try Again" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
		getch();
 		system("CLS");
    	login();
	}
return 0;
}