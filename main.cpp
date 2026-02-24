#include <iostream>

using namespace std;

int main()
{
	cout << 1 << endl;
	cout << 2 << endl;
	cout << 3 << endl;
	cout << 4 << endl;
	cout << 5 << endl;

	for (int i = 1; i < 6; i++)
	{
		cout << 1*i << endl;
	}

	cout << 'A' << endl;
	cout << "AB" << endl;
	
	int Money[10];

	Money[0] = 10;
	Money[1] = 10;
	Money[2] = 10;
	// นÝบน
	Money[9] = 10;


	for (int Index = 0; Index < 10; ++Index)
	{
		Money[Index] = 10;
	}



	return 0;
}