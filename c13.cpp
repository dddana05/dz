#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
     cin >> n;
     int a[n];
     for (int i=0; i<n; i++){
        cin >> a[i];
     }
     sort(a,a+n);
     int cnt=0;
     for (int i=0; i<n+1; i++){
        if (a[i]!=a[i+1]){
            cnt++;
        }
     }
     int unikal[cnt][2];
     
     for(int i=0; i<cnt; i++){
        unikal[i][1]=0;
     }
     int k=0;

     for (int i=0; i<n+1; i++){
        if (a[i]!=a[i+1]){
            unikal[k][0]=a[i];
            k++;
        }
     }
for (int i=0; i<n; i++){
    for (int j=0; j<cnt; j++){
        if (a[i]== unikal[j][0]){
            unikal[j][1]++;
        }
    }
}
  int max=-123123;
    for (int j=0; j<cnt; j++){
        if (max< unikal[j][1]){
            max=unikal[j][1];
            cout << unikal[j][0];
        }

}
return 0;
}