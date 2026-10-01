#include<iostream>
using namespace std;
void copyVOWELS(char* destination, const char* source) {
	int j = 0;
	for (int i = 0; source[i] != '\0'; i++) {
		if (source[i] == 'a' || source[i] == 'e' || source[i] == 'i' || source[i] == 'o' || source[i] == 'u' ||
			source[i] == 'A' || source[i] == 'E' || source[i] == 'I' || source[i] == 'O' || source[i] == 'U')
		{
			destination[j] = source[i];
			j++;
		}
	}
	destination[j] = '\0';
}
int main() {
	char source[100];
	char* destination = new char[100];
	cout << "Enter a string :";
	cin.getline(source, 100);

	copyVOWELS(destination, source);
	cout << " vowels :" << destination << endl;
	delete[] destination;

	return 0;
}