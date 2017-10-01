#include<iostream>
using namespace std;

void display(int *a);
void swapper(int *a, int *b);

int main()
{
	int a[10] = { 21, 15, 22, 4, 98, 1, 10, 5, 6, 58 };
	display(a);
	for (int i = 9; i >0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
				swapper(&a[j], &a[j + 1]);
		}
	}
	cout << endl << endl << endl;
	display(a);
}
void swapper(int *a, int *b)
{
	int temp =0;
	temp = *a;
	*a = *b;
	*b = temp;
}
void display(int *a)
{
	for (int i = 0; i < 10; i++)
		cout << a[i] <<"\t";
}