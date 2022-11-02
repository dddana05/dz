#include <bits/stdc++.h>
using namespace std;
int main () {
    int a,b,c,d,e,f,g;
    cin>>a>>b>>c>>d>>e>>f>>g;
    a=a*d; 
    b=b*e;
    c=c*f;
    if(a+b+c>g){
        cout<<"NO";
    }
    else{
        cout<<"YES";

    }
    return 0;
}