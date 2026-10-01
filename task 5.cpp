#include <iostream>
#include <fstream>
using namespace std;

void regrow(int*& arr, int& capacity) {
    capacity *= 2;

    int* newArr = new int[capacity];

    for (int i = 0; i < capacity / 2; i++)
        newArr[i] = arr[i];

    delete[] arr;
    arr = newArr;
}

int main() {
    ofstream dataFile("data.txt");
    dataFile << "1 5 6 2 3 4 5 8 2 0 1 3 9 5 6 -1 5 6 8 3 5 6 4 8";
    dataFile.close();

    ifstream input("data.txt");

    int lowCapacity = 2;
    int highCapacity = 2;

    int* lowArray = new int[lowCapacity];
    int* highArray = new int[highCapacity];

    int lowSize = 0;
    int highSize = 0;
    int number;

    while (input >> number && number != -1) {

        if (number <= 5) {
            if (lowSize == lowCapacity)
                regrow(lowArray, lowCapacity);

            lowArray[lowSize++] = number;
        }
        else {
            if (highSize == highCapacity)
                regrow(highArray, highCapacity);

            highArray[highSize++] = number;
        }
    }

    input.close();

    int lowMax = lowArray[0];
    for (int i = 1; i < lowSize; i++)
        if (lowArray[i] > lowMax)
            lowMax = lowArray[i];

    int highMax = highArray[0];
    for (int i = 1; i < highSize; i++)
        if (highArray[i] > highMax)
            highMax = highArray[i];

    ofstream output("output.txt");
    output << lowMax << " " << highMax;
    cout << "Maximum of lowArray: " << lowMax << endl;
    cout << "Maximum of highArray: " << highMax << endl;


    output.close();
    delete[] lowArray;
    delete[] highArray;

    return 0;
}
