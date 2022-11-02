#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,max=0;
    long long min;

    cin >> n;
    int a[n];

    for (int i=0; i<n;i++){
        cin >> a[i];
    }
    for ( int i=0;i<n;i++){
        if(min > a[i]){
            min = a[i];
        }   
        if (max < a[i]){
            max=a[i];
        }
    }     
    for ( int i=0;i<n;i++){
        if(a[i]==max){
            a[i]= min;
        }
        cout << a[i]<< " ";
    }
    return 0;
}