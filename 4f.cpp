#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    int max=-123123123,posx=0,posy=0;
    cin >> n;
    int a[n][n];
    for (int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cin >> a[i][j];
        }
    }
   for (int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            if(max<a[i][j]){
                max=a[i][j];
                posx=i+1;
                posy=j+1;
            }   
    }
    
   }
   cout << posx << " "<< posy;
   return 0;
}