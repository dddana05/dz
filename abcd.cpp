#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, k;
    int cntz=0;
    int cnto=0;

    cin >> n;

    for (int i=0; i<n; i++){
        cin >> k;
        if (k==0) {
            cntz++;
        } else {
            cnto++;
        }
        
    }   
    
    cout << min(cntz,cnto);

}
        