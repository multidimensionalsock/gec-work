////it doesnt work and it can go fuck itself 
//
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int findFileLines();
//
//struct account {
//	string name;
//	int accountNumber;
//	double balance;
//};
//
//int main() {
//	account accountIn;
//	account accountOut;
//	bool running = true;
//	bool cont = true;
//	int userChoice;
//	char moreDetails;
//
//	ofstream outFile;
//	ifstream inFile;
//
//
//	while (running == true) {
//		cout << "what would you like to do?:" << endl <<
//			"1. Enter New Details " << endl <<
//			"2. Display file contents" << endl <<
//			"3. Dispaly accounts with over 10,000" << endl <<
//			"4. Exit the program" << endl;
//		cin >> userChoice;
//
//		if (userChoice == 1) {
//			outFile.open("accountFile.txt");
//			while (cont == true) {
//				int lineNumber = findFileLines();
//				outFile.seekp(lineNumber);
//				if (outFile.is_open() == true) {
//					cout << "Name: ";
//					cin >> accountOut.name;
//					cout << endl << "Account Number: ";
//					cin >> accountOut.accountNumber;
//					cout << endl << "Balance: ";
//					cin >> accountOut.balance;
//
//					outFile << accountOut.name << "|" << accountOut.accountNumber << "|" << accountOut.balance << endl;
//					outFile << "EOF" << endl;
//
//					cout << "Would you like to enter more details? y/n";
//					cin >> moreDetails;
//					if (moreDetails == 'y') {
//						cont == true;
//					}
//					else {
//						cont = false;
//					}
//				}
//			}
//			cont = true;
//			outFile.close();
//		}
//
//		if (userChoice == 2) {
//			accountOut.name = ' ';
//			accountOut.accountNumber = ' '; //int
//			accountOut.balance = ' '; //doubke
//			inFile.open("accountFile.txt");
//			int fileLines = findFileLines();
//			if (inFile.is_open() == true) {
//				int a = 1;
//				for (int i = 0; i < fileLines; i++) {
//					string tempAN;
//					string tempB;
//					string searchThrough;
//					getline(inFile, searchThrough);
//					for (int j = 0; j < searchThrough.length(); j++) {
//						if (searchThrough == "EOF") {
//							break;
//						}
//						if (searchThrough[j] != '|') {
//							if (a == 1) {
//								accountOut.name += searchThrough[j];
//
//							}
//							if (a == 2) {
//								tempAN += searchThrough[j];
//							}
//							if (a == 3) {
//								tempB += searchThrough[j];
//							}
//						}
//						else {
//							a++;
//						}
//					}
//					//accountOut.accountNumber = stoi(tempAN);
//					//accountOut.balance = stoi(tempB);
//					cout << accountOut.name << endl;
//					cout << tempAN << endl;
//					cout << tempB << endl;
//				}
//				//get each line from the file and output it fter saving the
//				//detials to the second struct
//			}
//			inFile.close();
//		}
//
//		//if (userChoice == 3)
//
//		if (userChoice == 4) {
//			running = false;
//		}
//
//	}
//
//
//}
//int findFileLines() {
//	ifstream inFile;
//	inFile.open("accountFile.txt");
//	int count = 1;
//	string line;
//	while (inFile.peek() != EOF) {
//		getline(inFile, line);
//		count++;
//	}
//	cout << count;
//	return count;
//}