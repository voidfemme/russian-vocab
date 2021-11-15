// ****************************************************************************
// Author: 	void_femme
// Title: 	csv tutorial
// Description:	creates a csv report card and fills in the information with
// 		comma-separated values.
// Source:	https://www.geeksforgeeks.org/csv-file-management-using-c/
// ****************************************************************************
#include <iostream>
#include <string>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

void insert(string column, int row) {
	
	if (
	// if ( cout << column << ", ";

int main() {

	// file pointer
	fstream fout;

	// opens an existing csv file or creates a new file.
	fout.open("reportcard.csv", ios::out | ios::app);

	cout << "Enter the details of 5 students:"
		<< " roll name maths phy chem bio"
	<< endl;

	int i, roll, phy, chem, math, bio;
	string name;

	// Read the input
	for (i = 0; i < 5; ++i) {
		cin >> roll
			>> name
			>> math
			>> phy
			>> chem
			>> bio;

		// Insert the data to file
		fout << roll << ", "
			<< name << ", "
			<< math << ", "
			<< phy << ", "
			<< chem << ", "
			<< bio << endl;
	}
	return 0;
}


