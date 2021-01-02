#include <iostream>
using namespace std;
int linearSearch(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			return i;
	}
	return -1;
}
int binarySearch(int a[], int n, int l, int r, int x)
{
	if (l <= r)
	{
		int mid = (l + r) / 2;
		if (a[mid] == x)
			return mid;
		else if (x < a[mid])
			return binarySearch(a, n, 0, mid - 1, x);
		else
			return binarySearch(a, n, mid + 1, n - 1, x);
	}
	return -1;
}
