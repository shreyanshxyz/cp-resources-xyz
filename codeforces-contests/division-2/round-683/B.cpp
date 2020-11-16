#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define ll long long
#define dbl double
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        int c = 0;
        ll int sum = 0;
        int mi = 10000;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if(a[i][j] < 0)
                {
                    c++;
                }
                mi = min(mi, abs(a[i][j]));
                sum = sum + abs(a[i][j]);
            }
        }
    if (c % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - 2 * mi << endl;
    }
    
    }
}
