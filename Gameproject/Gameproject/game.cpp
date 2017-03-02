#include <iostream>
using namespace std;
int room = 1;
bool weapon = 0;

char input = 'a';
int main() {
	cout << "You wake in a dark cave.  You can feel a candle near your feet, and you have a match in your pocket." << endl;
	cout << "Will you light the candle and provide yourself with light?" << endl;
	cin >> input;
	if (input != 'y')
		cout << "You decided to fade into the darkness." << endl;
	else if (input == 'y') {
		cout << "Your journey begins." << endl;
		while (input != 'q')
		switch (room) {
		case 1: cout << "You are right where you found the candle.  There are two tunnels leading out of the room." << endl;
			cout << "One leads to the east, the other to the west.  Which way will you go?" << endl;
			cin >> input;
			if (input == 'e')
				room = 2;
			else if (input == 'w')
				room = 3;
			break;
		case 2: 
			cout << "You arrived in a room with a pedestal." << endl;
			if (weapon == 0)
				cout << "There is a sword in the pedestal.  Will you take it?" << endl;
			cin >> input;
			if (input == 'y') {
				cout << "You took the sword with you." << endl;
				weapon = 1;
			}
			else if (input == 'n') {
				cout << "You left the sword alone." << endl;
			}
			
				cout << "There are two paths you can take, one to the west and the other to the south." << endl;
				cout << "Which way will you go?" << endl;
				cin >> input;
				if (input == 'w')
					room = 1;
				else if (input == 's')
					room = 4;
			
			break;
			
		case 3:
			cout << "There is nothing to do here.  Go back east." << endl;
			cin >> input;
			if (input == 'e')
				room = 1;
			break;
		}
	}
}