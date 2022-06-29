#include <iostream>
using namespace std;
void selectionSort(int[], int);
int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        selectionSort(a, n);
    }
}
void selectionSort(int a[], int n)
{
    int i, j, t, mini, ctr = 0, ctr1 = 0;
    for (i = 0; i < n - 1; i++)
    {
        mini = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[mini])
                mini = j;
            ctr++;
        }
        if (mini != i)
        {
            t = a[mini];
            a[mini] = a[i];
            a[i] = t;
            ctr1++;
        }
    }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl
         << "Comparisons: " << ctr << endl;
    cout << "Swaps: " << ctr1 << endl;
}