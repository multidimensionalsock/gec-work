//#include <iostream>
//
//void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);
//bool TrueOrFalse(int num);
//int AddNumber(int num, int total);
//
//
//int main() {
//	int numOfOdd = 0;
//	int oddTotal = 0;
//	int numOfEven = 0;
//	int evenTotal = 0
//		;
//
//	int tempNum;
//	for (int i = 0; i < 10; i++) {
//		std::cout << i << ") input a number: ";
//		std::cin >> tempNum;
//
//		if (TrueOrFalse(tempNum) == true) {
//			evenTotal = AddNumber(tempNum, evenTotal);
//			numOfEven++;
//		}
//		else {
//			oddTotal = AddNumber(tempNum, oddTotal);
//			numOfOdd++;
//		}
//	}
//	outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
//}
//
//bool TrueOrFalse(int num) {
//	if (num % 2 == 0) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int AddNumber(int num, int total) {
//	total += num;
//	return total;
//}
//
//void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal) {
//	std::cout << numOfOdd << " odd numbers were input with a total of: " << oddTotal << "\n";
//	std::cout << numOfEven << " even numbers were input with a total of: " << evenTotal << "\n";
//}