//#include <iostream>
//#include <string>
//using namespace std;
//
//using namespace std;
//string inventory[3] = { "Sword","0","0" };
//const int INVENTORY_MAX = 2;
//void PrintInventory();
//void itemChoose(string option1, string option2, int position);
//void CheckIfFull();
//void Replace(string new_item);
//void Robbery();
//
//int main() {
//	string beginnerItem1 = "Staff";
//	string beginnerItem2 = "Knife";
//	string beginnerMagic1 = "Healing potion";
//	string beginnerMagic2 = "Fire spell";
//	itemChoose(beginnerItem1, beginnerItem2, 1);
//	itemChoose(beginnerMagic1, beginnerMagic2, 2);
//	CheckIfFull();
//	Replace("Magic Ring");
//	Robbery();
//	return 0;
//}
//
//void itemChoose(string option1, string option2, int position) {
//	string userChoice;
//	bool complete = false;
//	while (complete == false) {
//		cout << "Type which item you wish to keep: " << option1 << " or " << option2 << endl;
//		getline(cin, userChoice);
//		if (userChoice == option1) {
//			inventory[position] = userChoice;
//			complete = true;
//		}
//		else if (userChoice == option2) {
//			inventory[position] = userChoice;
//			complete = true;
//		}
//		else {
//			complete = false;
//		}
//	}
//	PrintInventory();
//}
//
//void PrintInventory() {
//	cout << "your inventory holds: " << endl;
//	for (int i = 0; i <= INVENTORY_MAX; i++) {
//		if (inventory[i] != "0") {
//			cout << (i + 1) << ": " << inventory[i] << "\n";
//		}
//	}
//}
//
//void CheckIfFull() {
//	bool found = false;
//	for (int i = 0; i < INVENTORY_MAX; i++) {
//		if (inventory[i] == "0") {
//			found = true;
//		}
//	}
//	if (found == false) {
//		cout << "Your inventory is full! " << endl;
//	}
//}
//
//void Replace(string new_item) {
//	int playerChoice;
//	cout << "You have found a " << new_item << ", what would you like to replace in your inventory? \nChoices: " << endl;
//	PrintInventory();
//	cin >> playerChoice;
//
//	switch (playerChoice) {
//	case 1:
//		inventory[0] = new_item;
//		break;
//	case 2:
//		inventory[1] = new_item;
//		break;
//	case 3:
//		inventory[2] = new_item;
//		break;
//	}
//	PrintInventory();
//}
//
//void Robbery() {
//	cout << "You have been robbed!!" << endl;
//	for (int i = 0; i <= INVENTORY_MAX; i++) {
//		inventory[i] = "0";
//	}
//	PrintInventory();
//	cout << "Empty!" << endl;
//}