#include<iostream>
using namespace std;
int sum(int arr[]) {
	int sum=0;
	for (int i = 0; i < 5; i++)
		sum = sum + arr[i];
	return sum;
}
int main()
{
	const int size = 5;
	int arr[5]{};
	cout << "Enter Marks of all Subjects:";
	cout << endl;
	for (int i = 0; i < 5; i++) {
		
		cin >> arr[i];
		cout << endl;
	}
	int total=sum(arr);
	cout << "Total marks are :" << total << endl;

	return 0;
}
