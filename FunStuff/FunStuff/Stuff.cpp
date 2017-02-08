#include <iostream>
using namespace std;
int main() {
	int stars = 0;
	cout << "Hello!  How many stars would you like to see?" << endl;
	cin >> stars;
	cout << "Ok!  Here you go!" << endl;
	for (int i = 0; i < stars; i++) {
		cout << "*";
	}
	cout << "" << endl;
}