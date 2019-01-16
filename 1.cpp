#include "stdafx.h"
#include <iostream>
using namespace std;

int n, m, sol[100];

void display(int x)
{
	for (int i = 1; i <= x; i++)
	{
		cout << sol[i] << " ";
	}
	cout << endl;
}

bool validator(int x)
{
	int i, ok = 1;
	for (int i = 1; i < x; i++)
	{
		if (sol[i] >= sol[x])
		{
			ok = 0;
		}
	}
	return ok;
}

void backtrack(int val)
{
	int i;
	if (val == m + 1)
	{
		display(m);
	}
	else
	{
		for (i = 1; i <= n; i++)
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
	cin >> n>>m;
	backtrack(1);
	return 0;
}
