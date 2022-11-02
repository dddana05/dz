#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a , a +n);
    int cnt = 0;
    for(int i = 0; i < n;i++){
        if(a[i] != a[i+1]){
            cnt++;
        }
    }
    int no_dup[cnt][2];
    int k = 0;
    for(int i = 0; i < n;i++){
        if(a[i] != a[i+1]){
            no_dup[k][0] = a[i];
            no_dup[k][1] = 0;
            k++;
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0; j < cnt;j++){
            if(no_dup[j][0] == a[i]){
                no_dup[j][1]++;
            }
        }
    }
    
    int max1 = -123123;
   for(int i = 0; i < cnt;i++){
     if( max1 < no_dup[i][1]){
            max1 = no_dup[i][1];
        }
   }
    for(int i = cnt-1; i >= 0;i--){
        if( max1 == no_dup[i][1]){
            cout <<  no_dup[i][1] << " ";
    
        }
    }
    return 0;
}
        