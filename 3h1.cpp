#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,l,r;
    cin >> n>>l>>r;
    long int sum=0;
    int a[n];
    for (int i=0; i < n; i++){
        cin >> a[i];
    }
    
    for (int i=l; i <=r;i++){
        sum+=a[i-1];
    }
    cout << sum ;
    return 0;
}