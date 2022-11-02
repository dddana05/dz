#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin >> n>> m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >>a[i][j];
        }
    }
    string s;
    int p;
    for(int i=0; i<n;i++){
        s=".";
        for(int j=0;j<m;j++){
            cin>>p;
            if(p>3) s+="R";
            if(p%2 !=0) s+="B";
            if((p==2) || (p==3) || (p=6)) s+="G";
            if(s.find(a[i][j])== string :: npos){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;

}