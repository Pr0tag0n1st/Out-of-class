#include <iostream>
using namespace std;
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
		while (input!='q'&&health>0)
	}
}