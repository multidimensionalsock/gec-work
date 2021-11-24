#include <iostream>
#include <string>

int main() {
	std::string name = '';
	std::getline(syd::cin, name);

	char firstInitial = '0';
	char middleInitial = '0';
	char lastInitial = '0';

	for (int i = 0; i <= sizeof(name); i++) {
		if (name[i] != ' ') {
			if (firstInitial == '0') {
				firstInitial = name[i];
			}
			else if (middleInitial == '0') {
				middleInitial = name[i];
			}
			else if (lastInitial == '0'){
				lastInitial = name[i];
			}
		}
	}
}