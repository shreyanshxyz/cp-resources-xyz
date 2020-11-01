#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
    cin>>t;
    while(t--) {
        int a[200],rem,i=0,n,m=0,f;
        cin>>n;
        f = n;
 
        while(f!=0)  {
            rem = f%10;
            a[i] = rem;
            f = f/10;
            i++;
             m++;
        }
 
         int t,x=0,indx=0;
         for(i=2;i<n;i++)  {
             t = 0;
             for(indx=0;indx<m;indx++) {
                 x = a[indx]*i + t;
                 a[indx] = x%10;
                 t = x/10;
              }
 
              while(t!=0) {
                  a[indx] = t % 10;
                  t = t/10;
                  indx++;
                  m++;
               }
            }
 
            for(i=m-1;i>=0;i--) {cout<<a[i];}
                cout<<endl;
            }
    return 0;
}
