#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int max=-123123, min=123123;
    while(n>0){
        int k= n%10;
        if (max< k){
            max=k;
        }
        if (min > k){
            min=k;
        }
        n/10;
    }
    cout << max <<" "<< min;