#include <iostream>
using namespace std;
int main (){
    int n,max=-100000,b=0;
    cin >>n;
    int  c[n];
    for (int i=0;i<n;i++){
        cin >> c[i];
        if (max<c[i]){
            max=c[i];
        }
        b+=c[i];
    }
    cout << b <<" "<< max;
}