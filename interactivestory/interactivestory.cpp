// interactivestory.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

using namespace std;


string response;
int num;
string name;
int choice;
int i;




string gettextfromuser() { // gets any text responses fropm the user
	cin >> response;
	return response;
}

int getnumberfromuser() { // gets any number responses from the user
	cin >> num;
	return num;
}



int path3() { //function for path 3 
	cout << endl << "congrats " << name << " you made it to ending 3" << endl;
	gettextfromuser();
	return 0;
}

	int path4() {//function for path 4
	cout << endl << "congrats " << name << " you made it to ending 4" << endl;
	gettextfromuser();
	return 0;
}
	
		int path5() {//function for path 5
	cout << endl << "congrats " << name << " you made it to ending 5" << endl;
	gettextfromuser();
	return 0;
}

int path6() {//function for path 6

	cout << endl << "congrats " << name << " you made it to ending 6" << endl;
	gettextfromuser();
	return 0;
}
int path1() {//function for path 1 and its choices

	cout << "pick a path\n Path 3\n path 4" << endl;
	choice = getnumberfromuser();
	switch (choice) { //determines which path to go too
	case 3:
		cout << "you chose choise 3";
		path3();
		break;
	case 4:
		cout << "You chose choice 4";
		path4();
		break;

	Default:
		cout << "You have entered an invalid choice";
	}



	return 0;
}
int path2() {//function for path 2 and its choices

	cout << "pick a path\n Path 5\n path 6" << endl;
	choice = getnumberfromuser();
	switch (choice) { //determines which path to go to
	case 5:
		cout << "you chose choise 5";
		path5();
		break;
	case 6:
		cout << "You have chose choice 6";
		path6();
		break;

	Default:
		cout << "You have entered an invalid choice";
	}

	return 0;
}






int main() // main starting function
{


	cout << endl << "Welcome to the interactive story thing." << endl << "Please enter your name now." << endl;
	name = gettextfromuser();
	cout << "Your name is " << name << "." << endl;
	cout << "pick a path\n Path 1\n path 2" << endl;
	choice = getnumberfromuser();
	switch (choice) { //determines which path you go on
	case 1:
		cout << "you chose choise 1" << endl;
		path1();
		break;
	case 2:
		cout << "You have chose choice 2";
		path2();
		break;

	Default:
		cout << "You have entered an invalid choice";
	}




    return 0;
}



