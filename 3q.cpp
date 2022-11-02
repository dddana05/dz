#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >>n;
    bool flag=true;
    if (n==0 || n==1){
        flag=false;
    }
    for (int i=2; i<=n/2; i++){
        if (n % i==0){
            flag = false;
            break;
        }
    }
    if (flag == false){
        cout << "NO";
    }
    else {
        cout << "YES";
    }
    return 0;
}