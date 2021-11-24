//#include <iostream>
//#include <string>
//using namespace std;
//void RockPaperScissors(int& playerWins, int& computerWins);
//void ScoreChecker(int playerWins, int computerWins);
//
//int main() {
//	int computerWins = 0;
//	int playerWins = 0;
//	while ((playerWins < 3) && (computerWins < 3)) {
//		RockPaperScissors(playerWins, computerWins);
//	}
//	if (playerWins == 3)
//		cout << "Congradulations you won!" << endl;
//	else
//		cout << "you lost" << endl;
//	cout << "Game over...";
//}
//
//void RockPaperScissors(int& playerWins, int& computerWins) {
//	int randomNumber = (rand() % 3) + 1;
//	string userChoice;
//	string computerChoice;
//
//	cout << "\nEnter your selection: ";
//	cin >> userChoice;
//	cout << "\nYou choose: " << userChoice << endl;
//
//	switch (randomNumber) {
//	case 1:
//		computerChoice = "Rock";
//		break;
//	case 2:
//		computerChoice = "Paper";
//		break;
//	case 3:
//		computerChoice = "Scissors";
//		break;
//	}
//	cout << "the computer chose: " << computerChoice << endl;
//
//	if (userChoice == computerChoice) {
//		cout << "it was a draw" << endl;
//	}
//	else if (userChoice == "Rock" && computerChoice == "Paper") {
//		cout << "You lose" << endl;
//		computerWins++;
//	}
//	else if (userChoice == "Paper" && computerChoice == "Scissors") {
//		cout << "You lose" << endl;
//		computerWins++;
//	}
//	else if (userChoice == "Scissors" && computerChoice == "Rock") {
//		cout << "You lose" << endl;
//		computerWins++;
//	}
//	else {
//		cout << "Congradulations, you win!" << endl;
//		playerWins++;
//	}
//
//	ScoreChecker(playerWins, computerWins);
//}
//
//void ScoreChecker(int playerWins, int computerWins) {
//	cout << "You need: " << 3 - playerWins << " to complete the game" << endl;
//	cout << "The computer needs: " << 3 - computerWins << " to complete the game" << endl;
//	cout << "**************************************";
//}