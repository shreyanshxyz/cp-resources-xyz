#include<bits/stdc++.h>
#define endl "\n";
#define pb push_back
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set <int> arr;
        bool repeat = 0;
        for (int i = 0; i < n; i++)
        {
            int e;
            cin >> e;
            if (arr.count(e))
            {
                repeat = 1;
            }
            arr.insert(e);
        }
        if (repeat)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}


