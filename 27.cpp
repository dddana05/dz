#include <bits/stdc++.h>
using namespace std;
int main (){
   int w,h,n;
   cin >> w>>h>>n;
   int a[h][w];
   for (int i=0; i<h; i++){
    for (int j=0; j<w;j++){
        a[i][j]=1;
    }
   }
   int x1,y1,x2,y2;
   for(int k=0; k<n;k++){
    cin >> x1>>y1>>x2>>y2;
    for(int i=y1; i<y2; i++){
        for (int j=x1;j<x2;j++){
            a[i][j]=0;
         
        }
    }
   }
   int s=0;
   for(int i=0; i<h;i++){
    for(int j=0; j<w;j++){
        s+=a[i][j];
    }
    cout<<s<<endl;
   }
   return 0;
}