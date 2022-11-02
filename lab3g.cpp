#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a[100000], maxx=-99999, minn=99999;

    
    cin >> n;

 for (int i = 0 ; i < n; i++){
    cin >> a[i];
 

    if ( a[i] >= maxx )
        maxx = a[i];
    
     if ( a[i] <= minn) 
        minn = a[i];
 }
    
     
    for (int i = 0; i <= n; i++){
        if(a[i] == maxx)
        a[i] = minn;

        cout << a[i];
    }
    
 return 0;
}

