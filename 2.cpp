#include "stdafx.h"
#include <iostream>
using namespace std;

int n, m, sol[100];

void display(int x)
{
	for (int i = 1; i <= x; i++)
	{
		cout << sol[i];
	}
	cout << " ";
}

bool validator(int x)
{
	int i, ok = 1;
	if (sol[x] % 2 == 0)
	{
		ok = 0;
	}
	return ok;
}

void backtrack(int val)
{
	int i;
	if (val == n + 1)
	{
		display(n);
	}
	else
	{
		for (i = 1; i <= 9; i++)
		{
			sol[val] = i;
			if (validator(val))
			{
				backtrack(val + 1);
			}
		}
	}
}

int main()
{
	cin >> n;
	backtrack(1);
	return 0;
}
