#include <iostream>
using namespace std;
int main() {
	int names = 0;
	char answer[5];
	char yes[5] = { 'y','e','s',0,0};
	char no[5] = { 'n','o',0,0,0 };
	char fname[24];
	char lname1[24];
	char lname2[24];
	char mname1[24];
	char mname2[24];
	char mname3[24];
	cout << "What's your first name?" << endl;
	cin >> fname;
	cout << "Do you have any middle names?" << endl;
	cin >> answer;
	if (answer == yes) {
		cout << "How many? (max of 3)" << endl;
		cin >> names;
		switch (names) {
		case 1:
			cout << "Tell me your middle name." << endl;
			cin >> mname1;
			mname2 == NULL;
			mname3 == NULL;
			break;
		case 2:
			cout << "What's your first middle name?" << endl;
			cin >> mname1;
			cout << "Now, what's your second middle name?" << endl;
			cin >> mname2;
			mname3 == NULL;
			break;
		case 3:
			cout << "What's your first middle name?" << endl;
			cin >> mname1;
			cout << "What's your second middle name?" << endl;
			cin >> mname2;
			cout << "What's your third middle name?" << endl;
			cin >> mname3;
			break;
		}
	}
	else if (answer == no) {
		cout << "Ok then." << endl;
		mname1 == NULL;
		mname2 == NULL;
		mname3 == NULL;
	}

		cout << "What's your last name?" << endl;
		cin >> lname1;
		cout << "Do you have a second last name?" << endl;
		cin >> answer;
		if (answer == yes) {
			cout << "What is it?" << endl;
			cin >> lname2;
		}
		else if (answer == no)
			cout << "Ok then." << endl; {
			lname2 == NULL;
		}
		cout << "So, you're " << fname << " " << mname1 << " " << mname2 << " " << mname3 << " " << lname1 << " " << lname2 << "?  Nice to meet you!" << endl;
	}