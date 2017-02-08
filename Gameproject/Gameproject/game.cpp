#include <iostream>
using namespace std;
int room = 1;
bool weapon = 0;
bool armor = 0;
int potion = 0;
int health = 100;
bool jewel = 0;
char input = 'a';
int main() {
	cout << "You wake in a dark cave.  You can feel a candle near your feet, and you have a match in your pocket." << endl;
	cout << "Will you light the candle and provide yourself with light?" << endl;
	cin >> input;
	if (input != 'y')
		cout << "You decided to fade into the darkness." << endl;
	else if (input == 'y') {
		cout << "Your journey begins." << endl;
		while (input != 'q'&&health > 0)
			cout << "You have " << health << " health." << endl;
		switch (room) {
		case 1: cout << "You are right where you found the candle.  There are two tunnels leading out of the room." << endl;
			cout << "One leads to the east, the other to the west.  Which way will you go?" << endl;
			cin >> input;
			if (input == 'e')
				room = 2;
			else if (input == 'w')
				room = 3;
			break;
		case 2: if (weapon == 0) {
			cout << "You arrived in a room with a pedestal holding a sword.  Will you draw it from its prison?" << endl;
			cin >> input;
			if (input == 'y') {
				cout << "You held the sword in your hand.  You quickly grew accustomed to its weight." << endl;
				weapon = 1;
			}
			else if (weapon == 1) {
				cout << "The pedestal where you found your sword is empty.  The rest of the room is dimly lit, and nothing is visible." << endl;
				cout << "There are two more paths, one to the "
			}
		}
		}
	}
}