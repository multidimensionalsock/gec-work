//#include <iostream>
//using namespace std;
//
//void inputDetails(int* n1, int* n2);
//void outputDetails(int& integer1, int& integer2, int* pointer);
//
//int main() {
//    int num1 = 0;
//    int num2 = 0;
//    int* pNum = &num1;
//    inputDetails(&num1, &num2);
//    outputDetails(num1, num2, pNum);
//}
//
//void inputDetails(int* n1, int* n2) {
//    cout << "input a number: ";
//    cin >> *n1;
//    cout << "\ninput another number: ";
//    cin >> *n2;
//}
//
//void outputDetails(int& integer1, int& integer2, int* pointer) {
//    cout << integer1 << endl;
//    cout << &integer1 << endl;
//    cout << integer2 << endl;
//    cout << &integer2 << endl;
//    cout << pointer << endl;
//    cout << *pointer << endl;
//    cout << &pointer << endl;
//    /*num1 value.
//        2. num1 address in memory.
//        3. num2 value.
//        4. num2 address in memory.
//        5. pNum value(the address it currently holds)
//        6. pNum dereferenced value.
//        7. pNum address in memory*/
//}