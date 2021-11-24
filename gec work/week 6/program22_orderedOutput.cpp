////THIS PROGRAM DOES NOT WORK AND IS NOT FINISHED
//
//#include <iostream>
//void orderArray(int userArray, int arrayLength);
//
//int main() {
//	int userinputarray[5];
//	int count = 0;
//
//	while (count < 5) {
//		int user_input;
//		std::cout << "input a number: ";
//		std::cin >> user_input;
//		userinputarray[count] = user_input;
//		count++;
//	}
//	int arraySize = sizeof(userinputarray);
//	orderArray(*userinputarray, arraySize);
//	return 0;
//}
//
//void orderArray(int userArray[], int arrayLength) {
//	bool move = true;
//	while (move == true) {
//		move = false;
//		for (int i = 1; i < arrayLength; i++) {
//			if (userArray[i - 1] > userArray[i]) {
//				int temp = userArray[i];
//				userArray[i] = userArray[i + 1];
//				userArray[i + 1] = temp;
//				move = true;
//			}
//		}
//	}
//	for (int i = 0; i < arrayLength; i++) {
//		std::cout << userArray[i];
//	}
//}
//

/*void orderarray(int unorderedarray[]) {
	int sortedarray[5];
	for ()
		bool move = true;
	while (move == true) {
		move = false;
		for (int i = 1; i < 5; i++) {
			if (sortedarray[i - 1] > sortedarray[i]) {
				int temp = sortedarray[i];
				sortedarray[i] = sortedarray[i + 1];
				sortedarray[i + 1] = temp;
				move = true;
			}
		}
		std::cout << move;
	}
	for (int j = 0; j < 5; j++) {
		std::cout << "element1 is " << sortedarray[j] << "\n";
	}
}

void backwardsarray(int orderedarray[]) {
	a fucntion that takes the value from orderarrayand outputs it backwards
}

void largestelement(int orderedarray[]) {
	a function that prints the last element of the sorted array
}*/