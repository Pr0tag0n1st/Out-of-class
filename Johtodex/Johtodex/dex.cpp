#include<iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
void Pokemon();
int main() {
	string Poke[802] = { "Bulbasaur", "Ivysaur", "Venusaur", "Charmander", "Charmeleon", "Charizard", };
	srand(time(NULL));
	while (1) {
		Pokemon();
		system("pause");
	}
}
void Pokemon() {
	int number = rand() % 802;
	switch (number) {
	case 0:
		cout << "You found Bulbasaur!" << endl;
		break; 
	case 1:
		cout << "You found Ivysaur!" << endl;
		break;
	case 2:
		cout << "You found Venusaur!" << endl;
		break;
	case 3:
		cout << "You found Charmander!" << endl;
		break;
	case 4:
		cout << "You found Charmeleon!" << endl;
		break;
	case 5:
		cout << "You found Charizard!" << endl;
		break;
	case 6:
		cout << "You found Squirtle!" << endl;
		break;
	case 7:
		cout << "You found Wartortle!" << endl;
		break;
	case 8:
		cout << "You found Blastoise!" << endl;
		break;
	case 9:
		cout << "You found Caterpie!" << endl;
		break;
	case 10:
		cout << "You found Metapod!" << endl;
		break;
	case 11:
		cout << "You found Butterfree!" << endl;
		break;
	case 12:
		cout << "You found Weedle!" << endl;
		break;
	case 13:
		cout << "You found Kakuna!" << endl;
		break;
	case 14:
		cout << "You found Beedrill!" << endl;
		break;
	case 15:
		cout << "You found Pidgey!" << endl;
		break;
	case 16:
		cout << "You found Pidgeotto!" << endl;
		break;
	case 17:
		cout << "You found Pidgeot!" << endl;
		break;
	case 18:
		cout << "You found Rattata!" << endl;
		break;
	case 19:
		cout << "You found Raticate!" << endl;
		break;
	case 20:
		cout << "You found Spearow!" << endl;
		break;
	case 21:
		cout << "You found Fearow!" << endl;
		break;
	case 22:
		cout << "You found Ekans!" << endl;
		break;
	case 23:
		cout << "You found Arbok!" << endl;
		break;
	case 24:
		cout << "You found Pikachu!" << endl;
		break;
	case 25:
		cout << "You found Raichu!" << endl;
		break;
	case 26:
		cout << "You found Sandshrew!" << endl;
		break;
	case 27:
		cout << "You found Sandslash!" << endl;
		break;
	case 28:
		cout << "You found Nidoran Female!" << endl;
		break;
	case 29:
		cout << "You found Nidorina!" << endl;
		break;
	case 30:
		cout << "You found Nidoqueen!" << endl;
		break;
	case 31:
		cout << "You found Nidoran Male!" << endl;
		break;
	case 32:
		cout << "You found Nidorino!" << endl;
		break;
	case 33:
		cout << "You found Nidoking!" << endl;
		break;
	case 34:
		cout << "You found Clefairy!" << endl;
		break;
	case 35:
		cout << "You found Clefable!" << endl;
		break;
	case 36:
		cout << "You found Vulpix!" << endl;
		break;
	case 37:
		cout << "You found Ninetales!" << endl;
		break;
	case 38:
		cout << "You found Jigglypuff!" << endl;
		break;
	case 39:
		cout << "You found Wigglytuff!" << endl;
		break;
	case 40:
		cout << "You found Zubat!" << endl;
		break;
	case 41:
		cout << "You found Golbat!" << endl;
		break;
	case 42:
		cout << "You found Oddish!" << endl;
		break;
	case 43:
		cout << "You found Gloom!" << endl;
		break;
	case 44:
		cout << "You found Vileplume!" << endl;
		break;
	case 45:
		cout << "You found Paras!" << endl;
		break;
	case 46:
		cout << "You found Parasect!" << endl;
		break;
	case 47:
		cout << "You found Venonat!" << endl;
		break;
	case 48:
		cout << "You found Venomoth!" << endl;
		break;
	case 49:
		cout << "You found Diglett!" << endl;
		break;
	case 50:
		cout << "You found Dugtrio!" << endl;
		break;
	case 51:
		cout << "You found Meowth!" << endl;
		break;
	case 52:
		cout << "You found Persian!" << endl;
		break;
	case 53:
		cout << "You found Psyduck!" << endl;
		break;
	case 54:
		cout << "You found Golduck!" << endl;
		break;
	case 55:
		cout << "You found Mankey!" << endl;
		break;
	case 56:
		cout << "You found Primape!" << endl;
		break;
	case 57:
		cout << "You found Growlithe!" << endl;
		break;
	case 58:
		cout << "You found Arcanine!" << endl;
		break;
	case 59:
		cout << "You found Poliwag!" << endl;
		break;
	case 60:
		cout << "You found Poliwhirl!" << endl;
		break;
	case 61:
		cout << "You found Poliwrath!" << endl;
		break;
	case 62:
		cout << "You found Abra!" << endl;
		break;
	case 63:
		cout << "You found Kadabra!" << endl;
		break;
	case 64:
		cout << "You found Alakazam!" << endl;
		break;
	case 65:
		cout << "You found Machop!" << endl;
		break;
	case 66:
		cout << "You found Machoke!" << endl;
		break;
	case 67:
		cout << "You found Machamp!" << endl;
		break;
	case 68:
		cout << "You found Bellsprout!" << endl;
		break;
	case 69:
		cout << "You found Weepinbell!" << endl;
		break;
	case 70:
		cout << "You found Victreebel!" << endl;
		break;
	case 71:
		cout << "You found Tentacool!" << endl;
		break;
	case 72:
		cout << "You found Tentacruel!" << endl;
		break;
	case 73:
		cout << "You found Geodude!" << endl;
		break;
	case 74:
		cout << "You found Graveler!" << endl;
		break;
	case 75:
		cout << "You found Golem!" << endl;
		break;
	case 76:
		cout << "You found Ponyta!" << endl;
		break;
	case 77:
		cout << "You found Rapidash!" << endl;
		break;
	case 78:
		cout << "You found Slowpoke!" << endl;
		break;
	case 79:
		cout << "You found Slowbro!" << endl;
		break;
	case 80:
		cout << "You found Magnemite!" << endl;
		break;
	case 81:
		cout << "You found Magneton!" << endl;
		break;
	case 82:
		cout << "You found Farfetch'd!" << endl;
		break;
	case 83:
		cout << "You found Doduo!" << endl;
		break;
	case 84:
		cout << "You found Dodrio!" << endl;
		break;
	case 85:
		cout << "You found Seel!" << endl;
		break;
	case 86:
		cout << "You found Dewgong!" << endl;
		break;
	case 87:
		cout << "You found Grimer!" << endl;
		break;
	case 88:
		cout << "You found Muk!" << endl;
		break;
	case 89:
		cout << "You found Shellder!" << endl;
		break;
	case 90:
		cout << "You found Cloyster!" << endl;
		break;
	case 91:
		cout << "You found Gastly!" << endl;
		break;
	case 92:
		cout << "You found Haunter!" << endl;
		break;
	case 93:
		cout << "You found Gengar!" << endl;
		break;
	case 94:
		cout << "You found Onix!" << endl;
		break;
	case 95:
		cout << "You found Drowzee!" << endl;
		break;
	case 96:
		cout << "You found Hypno!" << endl;
		break;
	case 97:
		cout << "You found Krabby!" << endl;
		break;
	case 98:
		cout << "You found Kingler!" << endl;
		break;
	case 99:
		cout << "You found Voltorb!" << endl;
		break;
	case 100:
		cout << "You found Electrode!" << endl;
		break;
	case 101:
		cout << "You found Exeggcute!" << endl;
		break;
	case 102:
		cout << "You found Exeggutor!" << endl;
		break;
	case 103:
		cout << "You found Cubone!" << endl;
		break;
	case 104:
		cout << "You found Marowak!" << endl;
		break;
	case 105:
		cout << "You found Hitmonlee!" << endl;
		break;
	case 106:
		cout << "You found Hitmonchan!" << endl;
		break;
	case 107:
		cout << "You found Lickitung!" << endl;
		break;
	case 108:
		cout << "You found Koffing!" << endl;
		break;
	case 109:
		cout << "You found Weezing!" << endl;
		break;
	case 110:
		cout << "You found Rhyhorn!" << endl;
		break;
	case 111:
		cout << "You found Rhydon!" << endl;
		break;
	case 112:
		cout << "You found Chansey!" << endl;
		break;
	case 113:
		cout << "You found Tangela!" << endl;
		break;
	case 114:
		cout << "You found Kangaskhan!" << endl;
		break;
	case 115:
		cout << "You found Horsea!" << endl;
		break;
	case 116:
		cout << "You found Seadra!" << endl;
		break;
	case 117:
		cout << "You found Goldeen!" << endl;
		break;
	case 118:
		cout << "You found Seaking!" << endl;
		break;
	case 119:
		cout << "You found Staryu!" << endl;
		break;
	case 120:
		cout << "You found Starmie!" << endl;
		break;
	case 121:
		cout << "You found Mr. Mime!" << endl;
		break;
	case 122:
		cout << "You found Scyther!" << endl;
		break;
	case 123:
		cout << "You found Jynx!" << endl;
		break;
	case 124:
		cout << "You found Electabuzz!" << endl;
		break;
	case 125:
		cout << "You found Magmar!" << endl;
		break;
	case 126:
		cout << "You found Pinsir!" << endl;
		break;
	case 127:
		cout << "You found Tauros!" << endl;
		break;
	case 128:
		cout << "You found Magikarp!" << endl;
		break;
	case 129:
		cout << "You found Gyarados!" << endl;
		break;
	case 130:
		cout << "You found Lapras!" << endl;
		break;
	case 131:
		cout << "You found Ditto!" << endl;
		break;
	case 132:
		cout << "You found Eevee!" << endl;
		break;
	case 133:
		cout << "You found Vaporeon!" << endl;
		break;
	case 134:
		cout << "You found Jolteon!" << endl;
		break;
	case 135:
		cout << "You found Flareon!" << endl;
		break;
	case 136:
		cout << "You found Porygon!" << endl;
		break;
	case 137:
		cout << "You found Omanyte!" << endl;
		break;
	case 138:
		cout << "You found Omastar!" << endl;
		break;
	case 139:
		cout << "You found Kabuto!" << endl;
		break;
	case 140:
		cout << "You found Kabutops!" << endl;
		break;
	case 141:
		cout << "You found Aerodactyl!" << endl;
		break;
	case 142:
		cout << "You found Snorlax!" << endl;
		break;
	case 143:
		cout << "You found Articuno!" << endl;
		break;
	case 144:
		cout << "You found Zapdos!" << endl;
		break;
	case 145:
		cout << "You found Moltres!" << endl;
		break;
	case 146:
		cout << "You found Dratini!" << endl;
		break;
	case 147:
		cout << "You found Dragonair!" << endl;
		break;
	case 148:
		cout << "You found Dragonite!" << endl;
		break;
	case 149:
		cout << "You found Mewtwo!" << endl;
		break;
	case 150:
		cout << "You found Mew!" << endl;
		break;
	case 151:
		cout << "You found Chikorita!" << endl;
		break;
	case 152:
		cout << "You found Bayleef!" << endl;
		break;
	case 153:
		cout << "You found Meganium!" << endl;
		break;
	case 154:
		cout << "You found Cyndaquil!" << endl;
		break;
	case 155:
		cout << "You found Quilava!" << endl;
		break;
	case 156:
		cout << "You found Typhlosion!" << endl;
		break;
	case 157:
		cout << "You found Totodile!" << endl;
		break;
	case 158:
		cout << "You found Croconaw!" << endl;
		break;
	case 159:
		cout << "You found Feraligatr!" << endl;
		break;
	case 160:
		cout << "You found Sentret!" << endl;
		break;
	case 161:
		cout << "You found Furret!" << endl;
		break;
	case 162:
		cout << "You found Hoothoot!" << endl;
		break;
	case 163:
		cout << "You found Noctowl!" << endl;
		break;
	case 164:
		cout << "You found Ledyba!" << endl;
		break;
	case 165:
		cout << "You found Ledian!" << endl;
		break;
	case 166:
		cout << "You found Spinarak!" << endl;
		break;
	case 167:
		cout << "You found Ariados!" << endl;
		break;
	case 168:
		cout << "You found Crobat!" << endl;
		break;
	case 169:
		cout << "You found Chinchou!" << endl;
		break;
	case 170:
		cout << "You found Lanturn!" << endl;
		break;
	case 171:
		cout << "You found Pichu!" << endl;
		break;
	case 172:
		cout << "You found Cleffa!" << endl;
		break;
	case 173:
		cout << "You found Igglybuff!" << endl;
		break;
	case 174:
		cout << "You found Togepi!" << endl;
		break;
	case 175:
		cout << "You found Togetic!" << endl;
		break;
	case 176:
		cout << "You found Natu!" << endl;
		break;
	case 177:
		cout << "You found Xatu!" << endl;
		break;
	case 178:
		cout << "You found Mareep!" << endl;
		break;
	case 179:
		cout << "You found Flaaffy!" << endl;
		break;
	case 180:
		cout << "You found Ampharos!" << endl;
		break;
	}
}
