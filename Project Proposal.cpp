// Project Proposal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;
int login()
{
	string username;
	string password;
	int loginAttempt = 0;

	while (loginAttempt < 5) {
		cout << "*****************************************" << endl;
		cout << "                  Login                  " << endl;
		cout << "*****************************************" << endl;
		cout << "\nEnter Username :";
		cin >> username;
		cout << "\nEnter Password :";
		cin >> password;

		if (username == "user" && password == "pass") {
			cout << "Welcome" << endl;
			break;
		}
		else {
			cout << "Please check your username or password" << endl;
			loginAttempt++;
		}
	}
	if (loginAttempt == 5) {
		cout << "Too many login";
		return 0;
	}

}
void addRecord() {
	string firstname, lastname, course, address;

	cout << "First Name" << endl;
	cin >> firstname;
	cout << "Last Name" << endl;
	cin >> lastname;
	cout << "Course" << endl;
	cin >> course;
	cout << "Address" << endl;
	cin >> address;
}
void viewRecord() {
}
int main() {
	login();

	ofstream MyFile("Database.txt");
	MyFile.close();

	while (true) {
		cout << "1.ADD RECORD" << endl;
		cout << "2.VIEW RECORD" << endl;
		cout << "3. EXIT" << endl;
		int userinput;
		cin >> userinput;
		switch (userinput) {
		case 1:
			addRecord();
			continue;
		case 2:
			viewRecord();
			continue;
		case 3:
			break;
		default:
			cout << "NOT IN THE CHOICES";
		}
		break;
	}



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
