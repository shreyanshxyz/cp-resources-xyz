#include<bits/stdc++.h>
using namespace std;

int reverse(int x){
 int r=0;
  while (x != 0)
   {
      r = r * 10;
      r= r + x%10;
      x = x/10;
   }
 return r;
}
int main()
{
    int t,a,b,c;
    cin>>t;
    while (t--)
    {
        std::cin>>a;
        std::cin>>b;

        a = reverse(a);
        b = reverse(b);

        c = reverse(a+b);
        cout << c <<endl;
    }
}
