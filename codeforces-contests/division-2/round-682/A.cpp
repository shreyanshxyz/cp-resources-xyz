// This problem simply states that an array is good if sum of its elements and the elements of all the subarrays is divisible by the length
// of the subarray and the length of the array respectively. To solve this question we derive an easy pattern of numbers which when added can be
// divided by the number of times they are added. Here we choose 4. 
// Suppose we have an array of 3 elements. If we initialise all the elements as 4 then, Subarray of 1 = 4 / 1 is divisible. Subarray of 2 = 4 + 4 / 2
// is divisible. The whole array, 4 + 4 + 4 / 3 is divisile.
// Hence we get our perfect array.

#include<bits/stdc++.h>
#define endl "\n";
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << 4 << " ";
        }
        cout << endl;
    }

}
