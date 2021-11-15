// ****************************************************************************
// Title:	All-in-one Russian Vocabulary Flashcard Program
// Author:	void_femme
// Description:	Creates and reads flashcards created by user
// Source(s):	"CSV file management using C++", https://www.geeksforgeeks.org/csv-file-management-using-c/
// ****************************************************************************

#include <iostream>
#include <string>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

// WriteMode() {

// }

int WelcomeMessage() {
	
	int mode = 0;
	int chosenOption = 0;
	char confirmation = 'n';

	// Display welcome menu
	cout << "Welcome to the all-in-one Russian Vocab Flashcard Program!";
	cout << endl << "Choose an option by typing an integer:" << endl << endl;

	while (confirmation == 'n') {
		cout << endl << "MENU" << endl;
		cout << "1. Write Mode" << endl;
		cout << "2. Drill Mode" << endl;
		cout << "3. Exit" << endl << endl;
		cin >> chosenOption;
		cout << endl;

		// Option Choice
		switch(chosenOption) {
			case 1:
				cout << "WRITE MODE" << endl;
				mode = chosenOption;
				break;
			case 2:
				cout << "DRILL MODE" << endl;
				mode = chosenOption;
				break;
			default:
				cout << "goodbye" << endl;
				mode = 3;
				break;
		}
		chosenOption = 0;

		// Confirm gamemode
		if (mode != 3 ) {
			cout << "Start? (y/n): ";
			cin >> confirmation;
		}
		else {
			break;
		}
	}
	return mode;
}

void WriteMode() {
	/* write mode prompts the user to input mandatory fields. It then saves 
	 * the word and its mandated fields to a csv file */
	
	string partOfSpeech;
	string russianWord;
	char englishWord[100];
	char tags[100];
	char keepGoing = 'y';

	// file pointer
	fstream fout;

	// opens an existing csv file or creates a new file.
	fout.open("wordslist.csv", ios::out |ios::app);

	// Read the input
	while (keepGoing == 'y') {
		cout << "Enter the vocabulary details." << endl;
		cout << "Part of speech: ";
		cin >> partOfSpeech;
		cout << "Russian word: ";
		cin >> russianWord;
		cout << "English meaning: ";
		cin.getline(englishWord,100);
		cout << "tags (maximum 80 characters): ";
		cin.getline(tags,100);

		cout << "you entered: " << endl;
		cout << "partOfSpeech = " << partOfSpeech << endl;
		cout << "russianWord = " << russianWord << endl;
		cout << "englishWord = " << englishWord << endl;
		cout << "tags = " << tags << endl;
/*
		// Insert the data to file
		fout 	<< partOfSpeech << ", " 
			<< russianWord << ", "
			<< englishWord[100] << ", "
			<< tags[80] << endl;
		cout << "Another? (y/n): ";
		cin >> keepGoing;
		*/
	}
}

	

int main() {

	int choice;
	choice = WelcomeMessage();
	
	if (choice == 1) {
		WriteMode();
	}
	else {
		cout << endl << endl << "CONGRATULATIONS, YOU DID IT! " << choice << endl;
	}
	return 0;
}
