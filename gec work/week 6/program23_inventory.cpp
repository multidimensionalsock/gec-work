//#include <iostream>
//#include <string>
//
//int main() {
//	const int MAX_ITEMS = 4;
//	int numItems = 0;
//	std::string inventory[MAX_ITEMS];
//
//	inventory[numItems++] = "Sword";
//	inventory[numItems++] = "Battle Axe";
//	inventory[numItems++] = "Healing Potion";
//	inventory[numItems++] = "Dagger";
//
//	char playerAnswer;
//	std::cout << "you have picked up the wizards staff, would you like to swap it for the dagger? y or n\n";
//	std::cin >> playerAnswer;
//	if (playerAnswer == 'y') {
//		inventory[3] = "Wizards Staff";
//	}
//	else if (playerAnswer = 'n') {
//		std::cout << "you leave the staff behind\n";
//	}
//	for (int i = 0; i <= MAX_ITEMS; i++) {
//		std::cout << i << ") " << inventory[i] << "\n";
//	}
//}