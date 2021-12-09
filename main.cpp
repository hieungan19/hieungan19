#include <bits/stdc++.h>
#define FOR(i,a,b) for (int i=a; i<=b; ++i)
using namespace std;
int main ()
{
    int n, x;
    long long s1, s2, factorial ;
    double s3;
    s1=s2=s3=factorial=1;
    cin>>n>>x;
    FOR(i,1,n)
    {
        s1+=pow(x,i);
        s2+=pow(x,i*2);
        factorial *= i;
        s3+= (double) pow(x,i)/(double)factorial;

    }
    cout<<s1<<endl<<s2<<endl<<s3;


}
