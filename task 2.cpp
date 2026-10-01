#include<iostream>
using namespace std;

int main() {
	int arr1[3]{};
	int arr2[3]{};
	cout << "enter integers for array 1:";
	for (int i = 0; i < 3; i++) {
		cin >> arr1[i];
	}
	cout << endl;
	cout << "enter integers for array 2:";
	for (int i = 0; i < 3; i++) {
		cin >> arr2[i];
	}
	int* ptr1 = arr1; //pointer pointing
	int* ptr2 = arr2;
	for (int i = 0; i < 3; i++) {
		int temp = *(ptr1+i);
		*(ptr1+i) = *(ptr2+i);
		*(ptr2+i) = temp;
		
	}
	cout << endl;
	cout << "First Array after swapping :" << endl;
	for (int i = 0; i < 3; i++) {
		cout << arr1[i];

	}
	cout << endl;
	cout << "Second Array after swapping :" << endl;
	for (int i = 0; i < 3; i++) {
		cout << arr2[i];
		
	}
	cout << endl;
	return 0;
}