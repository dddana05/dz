#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int max=-123123123;
     int max2=-123123123;
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
    for (int i=0; i<n;i++){
        for (int j=0; j<n;j++){
         if (max!=a[i][j] && a[i][j]> max2)
                max2 = a[i][j];
        }
    }
     if(max2==-123123123){
            max2=0;
         }
    cout << max2;
    return 0;
}
