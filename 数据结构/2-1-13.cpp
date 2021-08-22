#include<iostream>
using namespace std;
#define Max 50
int a[4] = { -5,3,2,3 };
int n = 4;

int findmin(int a[])
{
    int b[Max] = { 0 };
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] <= n + 1)
        {
            b[a[i]] = 1;
        }
    }
    int ans = 0;
    for (int i = 1; i < n + 2;i++)
    {
        if (b[i] == 0)
        {
            ans = i;
            break;
        }
    }
    return ans;
}
int main()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
    cout << findmin(a) << endl;
    system("pause");
    return 0;
}