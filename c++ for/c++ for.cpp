#include<iostream>
using namespace std;

int main() {

	int  n = 20;
	int mid = n / 3;


	for (int i = 1; i <= mid; i++)
	{

		for (int j = 1; j <= mid - i; j++)
		{
			cout <<  "";
		}
		for (int j = 1; j <= 2 * i -1; j++)
		{
			cout <<    "*";
		}
		cout << "\n";



	}

	
	for (int i = mid -1; i >= 1; i--)
	{

		for (int j = 1; j <= mid - i; j++)
		{
			cout << "";
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			cout <<   "*";
		}
		cout << "\n";



	}










	return 0;













}