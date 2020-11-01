#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int press = 0;
        for (int i = 1; i <=9; i++)
        {
            int apt = 0;
            for(int j = 1; j <= 4; j++)
            {
                apt = (apt*10)+i;
                press += j;
                if(apt == x){
                    cout << press << endl;
                    break;
                }
            }
        }
    }
}
