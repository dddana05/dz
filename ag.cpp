#include <iostream>
using namespace std;
int main (){
    int d,e,g;
    cin >> e >> g;
    int max=g,min=g,sum=g;
    for (d=1; d<e; d++) {
        cin >> g;
        if (g>max) max=g;
    }
    cout << max<<endl;
    return 0;
} 