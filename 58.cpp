#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,m,t;
    cin >> t;
    for(int k=0; k<t;k++){
        cin>> n>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];
            
        
        int x=1;
        for(int i=0; i<n-1;i++)
            for(int j=0;j<m-1;j++)
                if(a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1]%4==0)
                x=0;
            
            if(x) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        
    }
    return 0;
}
