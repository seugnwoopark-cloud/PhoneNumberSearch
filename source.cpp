#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

//function prototypes
void readLines(fstream *file, int&, string, string *);
void searchArray(string, string *, int, string, string);
void requestUserInput(string&);
void deleteUser(string&);

//main Function
int main() {
	//declaring all variables 
	fstream file;
	file.open("hotel_confirm_system.txt");
	int numOfPpl = 0;
	const int size = 50;
	string line;
	string *phoneArray = new string[size];
	string userInput;

	//Calling functions
	readLines(&file, numOfPpl, line, phoneArray);
	requestUserInput(userInput);
	searchArray(userInput, phoneArray, size, hotelroom, reservationtime);
	deleteUser(string&);
	
	cout << "The number of people in this hotel confirm list  is: " << numOfPpl << endl;
	cout << endl;


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
		cout << "|" <<end1;
		cout << phoneArray[i] << endl;
		cout << "|" <<end1;
	}
	cout << endl;
	cout << endl;
} 
 cout << "Please enter the 'search' or 'delete' on customer list!" 
	 cin >> a;
	cout<< end1;

if ( a='search'){
//Function that will ask for the user input
void requestUserInput(string& userInput) {
	cout << "Please enter the name or partial number you wish to search! ";
	cin >> userInput;
	cout << endl;
}
}
else if ( a='delete'){
void deleteUser(String& deleteInput){
	cout << "Please enter the name or partial number you with to deletle!:";
	cin >> delteInput;
	cout<< end1;
}
}
//Function that will check the user input to the array and tell us if there
//are any matches and display them to the console
void searchArray(string userInput, string *phoneArray, int size, string hotelroom,string reservationtime) {
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
