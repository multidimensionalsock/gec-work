#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string testString = "Do you know who loves c++ XX does!";
	string newString = testString.erase(remove(testString.begin(), testString.end(), 'XX'), testString.end());
	cout << testString << endl << newString;

	string name;
	cin >> name;
	newString = testString.replace(27, 2, name);
	cout << newString;
}