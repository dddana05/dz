#include <bits/stdc++.h>

using namespace std;

int main() {
    int j,k,l;
    cin >> j >> k >> l;
    int max, min ;
    max = min = 0;
    if ( j >= k &&  j >=l) max = j ;
    
    else if ( k > l ) max = k ;

    else  max = l;
    
     if ( j <= k && j <= l) min = j ;

    else if ( k < l) min = k ;
    
    else  min = l;
    
    cout << max-min << endl;

 return 0;
 
}

