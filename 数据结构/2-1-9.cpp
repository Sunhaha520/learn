#include<iostream>
using namespace std;

int a[10] = { 1,2,3,4,5,7,8,9,10,11 };
int length = 10;

void Search(int a[], int x)
{
	//’€∞Î≤È’“
	int low = 0;
	int high =length - 1;
	int mid;
	while (low <= high)
	{
		mid = (high + low) / 2;
		if (a[mid] == x)
		{
			break;
		}
		else if (a[mid] > x)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
   //ªªŒª
    if(a[mid]==x&&mid!=length-1)
	{
		int temp =a[mid];
		a[mid] = a[mid + 1];
		a[mid + 1] = temp;
	}
	//≤Â»Î
    if (low > high)
	{
		int i;
		for (i = length; i > high; i--)
		{
			  a[i + 1] = a[i];
		}
		a[i + 1] = x;
	}
	
}
int main()
{
	Search(a,6);
	for (int i = 0; i < length; i++)
	{
		cout << a[i] << "  ";
	}
	system("pause");
	return 0;
}