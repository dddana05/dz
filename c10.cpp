#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m,x;
    int max=-123123;
    cin >> n>> m;
    int a[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    cin >> x;
    for (int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            if (max< a[i][j]){
                max=a[i][j];
            }
        }
    }
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (max <= x){
                cout << "No penalty for today."<< endl;
                return 0;
            }
            else {
                cout <<"Penalty!"<< endl; 
                return 0;
            }

        }
    }
    
    return 0;
}