#include <iostream>
using namespace std;

int main()
{
	
	int arr[] = { 1, 2, 3, 4 };

	
	int* ptr = arr;

	
	cout << "Memory address of arr: " << &arr << endl;

	cout << "Memory address of arr: " << ptr << endl;

	return 0;
}
