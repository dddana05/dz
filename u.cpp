#include<bits/stdc++.h> 
#define ll long long int 
using namespace std; 
int main(){ 
    double x,y; 
    cin>>x; 
    cin>>y; 
    int z=1; 
    while(1){ 
        if(x>=y){ 
            cout<<z; 
            return 0; } 
            x=x*1.1; 
            z++; } 
            return 0; }