#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define ll long long
#define dbl double
using namespace std;

int main()
{
    cout << setprecision(10);
    cout << fixed;
    dbl a, b, c, d, x;
    cin >> a >> b >> c >> d;

    x = -b;

    if (a == c)
    {
        cout << a;
        return 0;
    }

    dbl y = (d - x)/(c - a);

    dbl z = (y * a - x) / y;

    cout << z << endl;
}
