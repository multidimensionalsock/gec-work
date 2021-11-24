//#include <iostream>
//
//void smallest_value(int array[]);
//
//int main() {
//	int userinputarray[10];
//	int count = 0;
//
//	while (count < 10) {
//		int user_input;
//		std::cout << "input a number\n";
//		std::cin >> user_input;
//		userinputarray[count] = user_input;
//		count++;
//	}
//	smallest_value(userinputarray);
//}
//
//void smallest_value(int array[]) {
//	int smallestvalue = 1000;
//	int pointervalue = 0;
//	for (int i = 0; i <= 9; i++) {
//		if (array[i] < smallestvalue) {
//			;
//			smallestvalue = array[i];
//			pointervalue = i;
//		}
//	}
//	std::cout << "\n the smallest value is " << smallestvalue << " its position in the array is " << pointervalue << "\n";
//}