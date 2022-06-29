#include <iostream>
using namespace std;
int main()
{
int i, t, ctr = 0, n, key, res; cin >> t;
while (t--)
{
cin >> n; int a[n];
for(i=0; i<n; i++) cin >> a[i]; cin >> key;
for (i=0; i<n; i++)
{
if (a[i] == key)
{
ctr++;
}
}
cout << key << " - " << ctr << endl;
}
}