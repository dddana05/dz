#include<bits/stdc++.h> 
#define ll long long int 
using namespace std;
ll n,sum=0,m,b; 
int main(){ 
    cin>>n;
    while(n--){ 
        sum=0; 
        cin>>m; 
        while(m!=0){ 
            b = m % 10; 
            sum += b; 
            m = m / 10; } 
            if (sum % 2 == 1)
            cout<<"Sum of digits is odd!\n"; 
            else 
            cout<<"Sum of digits is even!\n"; } 
            return 0; }