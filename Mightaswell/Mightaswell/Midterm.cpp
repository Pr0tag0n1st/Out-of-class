#include <iostream>
#include <Windows.h>
using namespace std;


bool map = 0;
bool shield = 0;
bool sword = 0;
bool pendant = 0;
bool key = 0;
char input = 'a';
char choice = 'b';
int health = 30;

int main() {
	cout << "RECLAIMING CORAZON" << endl;

	cout << "                                       /\\\ " << endl;
	cout << "                                      /`:\\\ " << endl;
	cout << "                                     /`'`:\\\ " << endl;
	cout << "                                    /`'`'`:\\\ " << endl;
	cout << "                                   /`'`'`'`:\\\ " << endl;
	cout << "                                  /`'`'`'`'`:\\\ " << endl;
	cout << "                                   |`'`'`'`:| " << endl;
	cout << "     _ _  _  _  _                  |] ,-.  :|_  _  _  _ " << endl;
	cout << "    ||| || || || |                 |  |_| ||| || || || | " << endl;
	cout << "    |`' `' `' `'.|                 | _'=' |`' `' `' `'.| " << endl;
	cout << "    :          .:;                 |'-'   :          .:; " << endl;
	cout << "     \-..____..:/  _  _  _  _  _  _| _  _'-\\\-..____..:/ " << endl;
	cout << "      :--------:_,' || || || || || || || `.::--------: " << endl;
	cout << "      |]     .:|:.  `' `'_`' `' `' `' `'    | '-'  .:| " << endl;
	cout << "      |  ,-. .[|:._     '-' ____     ___    |   ,-.'-| " << endl;
	cout << "      |  | | .:|'--'_     ,'____`.  '---'   |   | |.:| " << endl;
	cout << "      |  |_| .:|:.'--' ()/,| |`|`.\\\()   __  |   |_|.:| " << endl;
	cout << "      |  '=' .:|:.     |::_|_|_|\\\|::   '--' |  _'='.:| " << endl;
	cout << "      | __   .:|:.     ;||-,-,-,-,|;        | '--' .:| " << endl;
	cout << "      |'--'  .:|:. _  ; ||       |:|        |      .:| " << endl;
	cout << "      |      .:|:.'-':  ||       |;|     _  |]     _:| " << endl;
	cout << "      |      '-|:.   ;  ||       :||    '-' |     '--| " << endl;
	cout << "      |  _   .:|].  ;   ||       ;||]       |   _  .:| " << endl;
	cout << "      | '-'  .:|:. :   [||      ;|||        |  '-' .:| " << endl;
	cout << "  ,', ;._____.::-- ;---->'-,--,:-'<'--------;._____.::.`. " << endl;
	cout << " ((  (          )_;___,' ,' ,  ; //________(          ) )) " << endl;
	cout << "  `. _`--------' : -,' ' , ' '; //-       _ `--------' ,' " << endl;
	cout << "       __  .--'  ;,' ,'  ,  ': //    -.._    __  _.-  -   " << endl;
	cout << "   `-   --    _ ;',' ,'  ,' ,;/_  -.       ---    _, " << endl;
	cout << "       _,.   /-:,_,_,_,_,_,_(/:-\\\   ,     ,.    _   " << endl;
	cout << "     -'   `-'--'-'-'-'-'-'-'-''--'-' `-'`'  `'`' `	 " << endl;


	

	cout << "Sam awoke in the Northwest tower of the castle." << endl;
	cout << "Making his way down the stairs, he realized the kingdom was strangely quiet." << endl;
	cout << "Suddenly, he remembered the time he spent as Soar's slave." << endl;
	cout << "Sam had to find king Thaenor and set the kingdom right once more." << endl;



	int room = 1;
	while (input != 'q' && health >0) {
		cout << "You have " << health << " health." << endl;
		switch (room) {
		case 1:
			cout << "Inside the tall tower, Sam had a very clear view of the empty courtyard." << endl;
			cout << "The castle's flags were torn, still flowing in the wind but ripped." << endl;
			cout << "Stairs led down to the castle's courtyard." << endl;
			cout << "He could move either east (e), south (s), or down(d)." << endl;
			cin >> input;
			if (input == 'e')
				room = 2;
			else if (input == 's')
				room = 7;
			else if (input == 'd')
				room = 8;
			else
				cout << "That's not possible..." << endl;
			break;
		case 2:
			cout << "Exiting the tower, Sam found himself on top of the north wall." << endl;
			cout << "To his west, the northwest tower stood.  To his east, the northeast tower." << endl;
			cout << "He could go east (e) or west (w)." << endl;
			cin >> input;
			if (input == 'e')
				room = 3;
			else if (input == 'w')
				room = 1;
			else
				cout << "That's not possible..." << endl;
			break;
		case 3:
			cout << "Sam entered the northeast tower.  The stairs to the courtyard were blocked." << endl;

			if (map == 0) {
				cout << "There is a map on the floor.  Will you pick it up? (y/n)" << endl;
				cin >> choice;
				if (choice == 'y') {
					cout << "Sam picked up the map." << endl;
					map = 1;
				}
				else
					cout << "Sam left the map on the ground." << endl;
			}
			cout << "Sam can either go west (w) or south (s)." << endl;
			cin >> input;
			if (input == 'w')
				room = 2;
			else if (input == 's')
				room = 4;
			else
				cout << "That's not possible..." << endl;
			break;
		case 4:
			cout << "Sam walked along the top of the east wall.  There was something unsettling about it..." << endl;


			cout << "Sam could go either north (n) or south(s) from here." << endl;
			cin >> input;
			if (input == 'n')
				room = 3;
			else if (input == 's')
				room = 5;
			else
				cout << "That's not possible..." << endl;
			break;
		case 5:
			cout << "Sam entered the southeast tower." << endl;
			cout << "The west door and stairs to the courtyard were blocked." << endl;
			if (shield == 0) {
				cout << "A large enchanted shield is mounted on the wall." << endl;

				cout << "           |`-._/\\_.-`| " << endl;
				cout << "           |    ||    | " << endl;
				cout << "           |___o()o___| " << endl;
				cout << "           |__((<>))__| " << endl;
				cout << "           \\   o\/o    / " << endl;
				cout << "            \\   ||   / " << endl;
				cout << "             \\  ||  / " << endl;
				cout << "              '.||.' " << endl;
				cout << "                `` " << endl;


				cout << "Will you take it with you? (y/n)" << endl;
				cin >> choice;
				if (choice == 'y') {
					cout << "Sam took the shield and strapped it to his arm." << endl;
					shield = 1;
				}
				else
					cout << "Sam left the shield on the hook." << endl;
			}
			else
				cout << "Sam can only go north(n)." << endl;
			cin >> input;
			if (input == 'n')
				room = 4;
			else
				cout << "That's not possible..." << endl;
			break;
		case 6:
			cout << "Sam climbed the stairs to the southeast tower.  The east path twisted outside the window." << endl;
			if (sword == 0)
			{
				cout << "There is a sword on the table." << endl;

				cout << "	              , " << endl;
				cout << "              (@| " << endl;
				cout << " ,,           ,)|_____________________________________ " << endl;
				cout << "//\\\\8@8@8@8@8@8 / _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \\\ " << endl;
				cout << "\\\\//8@8@8@8@8@8 \\\_____________________________________/ " << endl;
				cout << " ``           `)| " << endl;
				cout << "              (@| " << endl;

				cout << "Will you take it?  (y/n)" << endl;
				cin >> choice;
				if (choice == 'y')
				{
					cout << "Sam took the sword and placed its sheath on his hip." << endl;
					sword = 1;
				}
				else
					cout << "Sam left the sword on the table." << endl;
			}
			else
				cout << "Sam can only go north(n)." << endl;
			cin >> input;
			if (input == 'n')
				room = 7;
			else
				cout << "That's not possible..." << endl;
			break;
		case 7:
			cout << "Sam stood in front of the west gate.  A wide path stretched on the side opposite of him." << endl;
			cout << "Stairs to the northeast and southeast towers were close by, and the courtyard was behind him." << endl;
			if (map == 0)
			{
				cout << "Sam can either go east(e), north(n), or south(s).  Sam would get lost if he went east without a map." << endl;
				cin >> input;
				if (input == 'e')
					room = 8;
				else if (input == 'n')
					room = 1;
				else if (input == 's')
					room = 6;
				else
					cout << "That's not possible..." << endl;
			}
			else
			{
				cout << "Sam can go west(w), east(e), north(n), or south(s)." << endl;
				cin >> input;
				if (input == 'e')
					room = 8;
				else if (input == 'n')
					room = 1;
				else if (input == 's')
					room = 6;
				else if (input == 'w')
					room = 11;
				else
					cout << "That's not possible..." << endl;
			}
			break;
		case 8:
			cout << "Sam walked through the castle courtyard.  There was something unsettling about it..." << endl;


			cout << "A large structure, the living quarters, was visible inside the courtyard.  However, it is locked." << endl;
			if (key == 0)
			{
				cout << "Sam can only go west(w), south(s), or up(u) to the northeast tower." << endl;
				cin >> input;
				if (input == 'w')
					room = 7;
				else if (input == 'u')
					room = 1;
				else if (input == 's')
					room = 13;
				else
					cout << "That's not possible..." << endl;
			}
			else
			{
				cout << "Sam can go west(w), south(s), up(u), or inwards(i)." << endl;
				cin >> input;
				if (input == 'w')
					room = 7;
				else if (input == 'u')
					room = 1;
				else if (input == 'i')
					room = 9;
				else if (input == 's')
					room = 13;
				else
					cout << "That's not possible..." << endl;
			}
			break;
		case 9:
			cout << "Sam entered the castle's living quarters.  There was something unsettling about it..." << endl;


			if (pendant == 0)
			{
				cout << "Sam can only go outside(o) from here." << endl;
				cin >> input;
				if (input == 'o')
					room = 8;
				else if (input == 'c') {
					cout << "You stumbled upon some cheesecake.  Let's see what your subconcious has to say about this." << endl;
					cout << "over radically strawberry choclate cheese ontop of sprinkles as well of candy cones with cut up apples in the inside melted choclate with cheese inside of the cheesecake with the cut up chooclate." << endl;
				}

				else
					cout << "That's not possible..." << endl;
			}
			else
			{
				cout << "Thaenor's pendant started to shine brightly.  The door to the keep was unlocked." << endl;
				cout << "Go down(d) to deliver Soar's punishment!  Take back Corazon for Thaenor!" << endl;
				cin >> input;
				if (input == 'd')
					room = 10;
				else
					cout << "You have everything you need!  It's not possible to back down now!" << endl;
			}
			break;
		case 10:
			cout << "Soar turned toward the entrance, watching Sam as he entered the keep." << endl;
			cout << "Soar fired a bolt of magic at Sam, who blocked it with his shield." << endl;
			cout << "Sam advanced upon Soar, who begged for mercy.  Sam didn't heed his cries." << endl;
			cout << "Sam struck Soar with his sword." << endl;

			

			cout << "Soar disappeared, leaving behind a message and a crown." << endl;

			cout << "                o  " << endl;
			cout << "             o^/|\\\^o  " << endl;
			cout << "          o_^|\\\/*\\\/|^_o  " << endl;
			cout << "         o\\\*`'.\\\|/.'`*/o  " << endl;
			cout << "          \\\\\\\\\\\\\|//////  " << endl;
			cout << "           {><><@><><}  " << endl;


			cout << "Sam read the letter:  'Brave warrior, you bested me.  I will leave your kingdom alone.'" << endl;
			cout << "Thaenor also returned, taking his rightful place as the king of Corazon." << endl;
			cout << "Finally, Corazon could return to its previous, prosperous life." << endl;
			return 0;
			break;
		case 11:
			cout << "Sam was on the other side of the west gate.  There was something unsettling about it..." << endl;


			cout << "Guided by the map, Sam could either head North(n) to Luz or East(e) to Thaenor's castle." << endl;
			cin >> input;
			if (input == 'n')
				room = 12;
			else if (input == 'e')
				room = 7;
			else if (input == 'p')
				room = 14;
			else
				cout << "That's not possible..." << endl;
			break;
		case 12:
			cout << "Sam arrived at Luz, where Thaenor had fled to." << endl;
			cout << "He saw a sign, saying, 'Leave the castle key to prove your loyalty." << endl;
			if (key == 0)
			{
				cout << "Sam couldn't leave the key.  He had to return to the castle by heading south(s)." << endl;
				cin >> input;
				if (input == 's')
					room = 11;
				else
					cout << "that's not possible..." << endl;
			}
			else
				cout << "Sam placed the key near the sign.  Thaenor, watching from a distance, slowly approached him." << endl;
			cout << "He said, 'Sam, I knew I could trust you to find me.  Take this pendant.  It's the only way to open the castle's keep." << endl;
			pendant = 1;
			cout << "There, you will find Soar.  Strike him down.'  Sam accepted this final task from his king." << endl;
			cout << "He had to go south(s) to the castle once more." << endl;
			cin >> input;
			if (input == 's')
				room = 11;
			else
				cout << "It's not possible to go against your king.  Trust his word." << endl;
			break;
		case 13:
			cout << "Sam arrived at the south wall." << endl;
			if (key == 0)
			{
				cout << "There was something unsettling about it..." << endl;
				cout << "An opponent jumped down from the top of the wall.  He introduced himself." << endl;
				cout << "'I am Irk, and you are a fool if you wish to fight me!'  He lunged at Sam." << endl;
				if (shield == 0)
				{
					cout << "Sam could not block the attack, and took 10 damage.  He was flung back to the courtyard." << endl;
					health = health - 10;
					room = 8;
				}
				else
				{
					cout << "Sam blocked the attack, taking no damage.  He stood his ground, prepared to fight Irk." << endl;
					if (sword == 0)
					{
						cout << "Sam realized he had no sword.  He could not fight Irk." << endl;
						cout << "Irk sent Sam to the courtyard, telling him to look for a suitable weapon." << endl;
						room = 8;
					}
					else
					{
						cout << "Sam struck back, but missed his enemy.  They fought on, dodging and blocking several strikes." << endl;
						cout << "Eventually, Sam's skill and endurance prevailed, allowing him to defeat Irk." << endl;
						cout << "Irk had a dying message for Sam.  'You have bested me...  I can't believe it." << endl;
						cout << "Nevertheless, I shall give you this key.  You earned it...'" << endl;
						cout << "Irk dissolved into light, leaving behind the key.  Sam picked it up." << endl;
						key = 1;
					}
				}
			}
			else
				cout << "Sam, having the key, did not need to be here.  He could only go north(n)." << endl;
			cin >> input;
			if (input == 'n')
				room = 8;
			else
				cout << "That's not possible..." << endl;
			break;
		case 14:
			cout << "Sam has arrived at a Pizza Hut, despite the game taking place in the middle ages." << endl;
			cout << "Anyways, he still entered and ordered a pizza with a side of hot wings." << endl;
			cout << "His hot wings never arrived, and Sam vowed to start the Pizza Hut rebellion." << endl;
			cout << "He left and would never come back." << endl;
			room = 11;
			break;

		default:
			cout << "How did you get here?  I guess my game is broken." << endl;

		}//end switch
	}//end while
}//end main

