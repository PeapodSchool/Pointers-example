#include <iostream>

using namespace std;

void changeVar1(int var); // this funciton doesn`t work properly
// these ones work properly
void changeVar2(int* var);
void changeVar3(int& var);
// these ones work the same, the difference is in syntaxis
void mySwap1(int* a, int* b);
void mySwap2(int& a, int& b);
// first function allows us to modify array elements, whereas the second one doesn`t
void print1(int* arr, int size);
void print2(const int* arr, int size);

int main() {
	int var = 1;
	changeVar1(var);
	cout << "var after changeVar1 function: " << var << endl;
	changeVar2(&var);
	cout << "var after changeVar2 function: " << var << endl;
	changeVar3(var);
	cout << "var after changeVar3 function: " << var << endl;

	int a = 10, b = 20;
	cout << "a = " << a << ", b = " << b << endl;
	mySwap1(&a, &b);
	cout << "After mySwap1 a = " << a << ", b = " << b << endl;
	mySwap2(a, b);
	cout << "After mySwap1 a = " << a << ", b = " << b << endl;

	const int size = 5;
	int arr[] = { 5, 2, 10, 5, 1 };
	cout << "After print1: " << endl;
	print1(arr, size);
	cout << "After print2: " << endl;
	print2(arr, size);

	return 0;
}

void changeVar1(int var) {
	var = 10;
}

void changeVar2(int* var) {
	*var = 20;
}


void changeVar3(int& var) {
	var = 30;
}

void mySwap1(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void mySwap2(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void print1(int* arr, int size)
{
	arr[0] = -999;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void print2(const int* arr, int size)
{
	//arr[0] = -999;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
