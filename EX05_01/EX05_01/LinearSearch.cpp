#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
T linearSearch(T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}

	return 0;
}

int main()
{
	int intArray[] =
	{
		1, 2, 3, 5, 9, 16, 21, 43
	};
	cout << "linearSearch(intArray, 3, 8) is " << linearSearch(intArray, 3, 8) << endl;
	cout << "linearSearch(intArray, 10, 8) is " << linearSearch(intArray, 16, 8) << endl;

	double doubleArray[] =
	{
		1.4, 2.3, 4.6, 7.7, 12.5, 14.7, 32.9, 87.6
	};
	cout << "linearSearch(doubleArray, 3.0, 8.0) is " << linearSearch(doubleArray, 2.3, 8) << endl;
	cout << "linearSearch(stringArray, 10.0, 8.0) is " << linearSearch(doubleArray, 4.6, 8) << endl;

	string stringArray[] =
	{
		"Caramel", "Chocolate", "Vanilla", "Coconut", "Butterscotch", "Strawberry", "Bannana", "Cherry"
	};
	cout << "linearSearch(stringArray, "", 8) is " << linearSearch(stringArray, static_cast<string>("Butterscotch"), 8) << endl;
	cout << "linearSearch(stringArray, "", 8) is " << linearSearch(stringArray, static_cast<string>("Chocolate"), 8) << endl;
	
	return 0;

}
