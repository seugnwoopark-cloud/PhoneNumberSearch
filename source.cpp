#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <stdio.h>

using namespace std;

//function prototypes
void readLines(fstream *file, int&, string, string *);
void searchArray(string, string *, int);
void requestUserInput(string&);
void deleteUser(string&);
void ChoosetwoWay(string&);
//main Function
int main() {
	//declaring all variables 
	fstream file;
	file.open("hotellist.txt");
	int numOfPpl = 0;
	const int size = 20;
	string line;
	string *phoneArray = new string[size];
	string userInput;
	string want;
	string deleteInput;
	string addInput;

	//Calling functions
	while (1)
	{
		readLines(&file, numOfPpl, line, phoneArray);
		requestUserInput(userInput);
		searchArray(userInput, phoneArray, size);

		cout << "The number of people in this list  is: " << numOfPpl << endl;
		cout << endl;
	}

	system("pause");

}

//Function that will read the entire file and display the numbers to the console
//as well as place the lines into the phoneArray
void readLines(fstream *file, int& numOfPpl, string line, string *phoneArray) {
	while (getline(*file, line))
	{
		//getline(*file, line);
		phoneArray[numOfPpl] = line;
		numOfPpl++;
	}
	cout << "Here is the list of everyone in the Hotel-confirm sysytem!" << endl;
	cout << endl;
	for (int i = 0; i < 20; i++) {
		cout << phoneArray[i] << endl;
	}
	cout << endl;
	cout << endl;
}



void ChoosetwoWay(string& want){
	cout << "Please enter the number search=1 or delete=2 on customer list!:";
	cin >> want;
	cout << endl;

}


void deleteUser(string& deleteInput){
	cout << "Please enter the name or partial number you with to deletle!:";
	cin >> deleteInput;
	cout << endl;
}


//Function that will ask for the user input
void requestUserInput(string& userInput) {
	cout << "Please enter the name or partial number you wish to search! ";
	cin >> userInput;
	cout << endl;
}


//Function that will check the user input to the array and tell us if there
//are any matches and display them to the console
void searchArray(string userInput, string *phoneArray, int size) {
	bool match = false;
	
		cout << "Here are the results that were found!" << endl;
		for (int i = 0; i < size; i++) {
			if (phoneArray[i].find(userInput) != -1)
			{
				cout << phoneArray[i] << endl;
				match = true;
			}
		}

		cout << endl;
	
	if (!match) {
		cout << "No matches were found with the term: " << userInput << endl;
	}
}

