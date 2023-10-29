#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* b, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		b[i] = Low + rand() % (High - Low + 1);
}
void Print(int* b, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << b[i];
	cout << endl;
}

int Sum(int* b, const int size)
{
	int S = 0;

	for (int i = 0; i < size; i++)
		if (b[i] > 0 && b[i] % 2 != 0)
		{
			S += b[i];
		}
	return S;
}
int Number(int* b, const int size)
{
	int N = 0;

	for (int i = 0; i < size; i++)
		if (b[i] > 0 && b[i] % 2 != 0)
		{
			N++;
		}
	return N;
}
void Zero(int* b, const int size)
{
	for (int i = 0; i < size; i++)
		if (b[i] > 0 && b[i] % 2 != 0)
		{
			b[i] = 0;
		}
}
int main()
{
	srand((unsigned)time(NULL));

	const int n = 26;
	int a[n];

	int Low = -40;
	int High = 20;
	Create(a, n, Low, High);
	cout << "a[n] =";
	Print(a, n);
	int S = Sum(a, n);
	int number = Number(a, n);
	cout << "Sum = " << S << endl;
	cout << "Number = " << number << endl;
	Zero(a, n);
	cout << "a[n] =";
	Print(a, n);
	return 0;
}
