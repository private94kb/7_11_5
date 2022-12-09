#include <iostream>
#include <time.h>//для бібліотеки time
#include <stdlib.h>//для бібліотеки random

using namespace std;
int main() {
	int num;
	int arr[8];
	srand(time(NULL));// отримує у вигляді параметра поточний системний час, який при кожному запуску програми буде різним. 
	for (int i = 0; i < 8; i++) {
		arr[i] =rand() % 70;
	}
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if (arr[j] > arr[j + 1]) {
				num = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = num;
			}
		}
	}
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << ' ';//виводимо масив
	}
	cout << endl << "The second largest element is : " << arr[6] << endl;
  }