#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i < n; i++){
        cin >> a[i];
    }
    int max=a[0], max_pos=1;
    for (int i=0; i < n;i++){
        if(max < a[i]){
            max=a[i];
            max_pos= i+1;
        }
    }
    cout << max_pos<< endl;

    return 0;
}