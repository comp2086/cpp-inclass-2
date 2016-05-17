#include <iostream>

using namespace std;

void fib() 
{
	int fibonacchi[15] = { 1, 1 };

	for (int i = 0; i < 15; i++)
	{
		if (i > 1)
			fibonacchi[i] = fibonacchi[i - 1] + fibonacchi[i - 2];

		cout << fibonacchi[i] << endl;
	}
}

void toRomanNumeral()
{

}

int main()
{
	int halt;
	//fib();
	toRomanNumeral();

	cin >> halt;
	return 0;
}