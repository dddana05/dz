#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long int max=-1000000;
    cin  >> n ;
    int a[n][n];
    for (int i=0; i<n;i++){
        for (int j=0; j<n;j++){
            cin >> a[i][j];
         if (a[i][j]> max){
         max = a[i][j];
         }
        }
    }
        cout << max;
        return 0;
}