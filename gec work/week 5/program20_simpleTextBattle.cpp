//#include <iostream>
//
////global variables
//int playerHealth = 1000;
//int enemyHealth = 2000;
//bool playing = true;
//
//void attack(int playerChoice);
//bool playState();
//
//int main() {
//	int playerChoice;
//	std::cout << "You have met a troll\n";
//
//	while (playing != false) {
//		std::cout << "There is 3 options of attack\n  1. use sword\n  2. use magic\n  3. use axe\n";
//		std::cin >> playerChoice;
//		attack(playerChoice);
//		playing = playState();
//	}
//	return 0;
//}
//
//void attack(int playerChoice) {
//	//this only works the first time it is excuted, after that it refuses to take away the health
//	const int swordDamage = 300;
//	const int magicDamage = 650;
//	const int axeDamage = 450;
//	const int trollSword = 350;
//	const int trollMagic = 50;
//	const int trollAxe = 100;
//
//	switch (playerChoice) {
//	case 1:
//		std::cout << "case 1";
//		enemyHealth -= swordDamage;
//		playerHealth -= trollSword;
//		std::cout << "you have hit the troll\n";
//		std::cout << "you have been hit by the troll\n";
//		if (playerHealth < 0) {
//			playerHealth = 0;
//		}
//		if (enemyHealth < 0) {
//			enemyHealth = 0;
//		}
//		std::cout << "your health is: " << playerHealth << " enemy health is: " << enemyHealth << "\n";
//		break;
//
//	case 2:
//		std::cout << "case 2";
//		enemyHealth -= magicDamage;
//		playerHealth -= trollMagic;
//		std::cout << "you have hit the troll\n";
//		std::cout << "you have been hit by the troll\n";
//		if (playerHealth < 0) {
//			playerHealth = 0;
//		}
//		if (enemyHealth < 0) {
//			enemyHealth = 0;
//		}
//		std::cout << "your health is: " << playerHealth << " enemy health is: " << enemyHealth << "\n";
//		break;
//
//	case 3:
//		enemyHealth -= axeDamage;
//		playerHealth -= trollAxe;
//		std::cout << "you have hit the troll\n";
//		std::cout << "you have been hit by the troll\n";
//		if (playerHealth < 0) {
//			playerHealth = 0;
//		}
//		if (enemyHealth < 0) {
//			enemyHealth = 0;
//		}
//		std::cout << "your health is: " << playerHealth << " enemy health is: " << enemyHealth << "\n";
//		break;
//	}
//	std::cout << "press any key \n";
//}
//
//bool playState() {
//	char playAgain;
//
//	if (enemyHealth <= 0) {
//		std::cout << "you have killed the troll, would you like to play again? y/n\n";
//		std::cin >> playAgain;
//		if (playAgain = 'y') {
//			enemyHealth = 2000;
//			playerHealth = 1000;
//		}
//		else {
//			return false;
//		}
//	}
//	else if (playerHealth <= 0) {
//		std::cout << "you have been killed, would you like to play again? y/n";
//		std::cin >> playAgain;
//		if (playAgain = 'y') {
//			enemyHealth = 2000;
//			playerHealth = 1000;
//			return true;
//		}
//		if (playAgain = 'n') {
//			return false;
//		}
//	}
//	return true;
//}