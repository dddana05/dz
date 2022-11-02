#include <bits/stdc++.h>
using namespace std;
main()
{
int n,k,mx,mn;
cin>>n>>mx;
mn=mx;
for( int i=2;i<=n;i++)
{
cin>>k;
if(k>mx)mx=k;
if(k<mn)mn=k;
}
cout<<mn<<' '<<mx;
return 0;

}