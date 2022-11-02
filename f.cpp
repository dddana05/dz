#include <bits/stdc++.h> 
using namespace std; 
int main() { 
    int a,b,c,d,e,f; 
    cin>>a>>b>>c>>d>>e>>f; 
    if(abs(a-c)>=abs(e-a) && abs(a-c)>=abs(e-c) && abs(b-d)>=abs(f-b) && abs(b-d)>=abs(f-d)){ 
        cout<<"yes";} 
        else {
            cout<<"no"; }
    return 0;}

