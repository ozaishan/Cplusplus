
#include <iostream>
using namespace std;
void findnum(int a, int b, int arr[]);


int main()
{
	int x, y;
	int arr[2];

	cout << "Enter two numbers: \n";
	cin >> x >> y;

	findnum(x, y, arr);

	cout << "\nThe greater number is " << arr[0] << " and the "
		"smaller number is " << arr[1];

	return 0;
}

void findnum(int a, int b, int arr[])
{


	if (a > b) {
		arr[0] = a;
		arr[1] = b;
	}
	else {
		arr[0] = b;
		arr[1] = a;
	}
}

