#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,t;
    cin >> n;
    int a[n], b[n];
    for (int i=0; i<n;i++){
        cin >> a[i];
    }
    for (int i=0; i<n; i++){
        cin >> b[i];
    }
    cin >>t;
    int cnt=0;
    for (int i=0; i<n; i++){
        if (a[i]< t && t < b[i]){
            cnt++;
        }
    }
    cout << cnt;

}
