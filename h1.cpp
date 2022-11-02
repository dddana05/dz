#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n,m,b,v;
    cin >> n>>m>>b;
    floor (v=(m+n)/10);
    
    if (v>=b){
        cout <<"You are my sweet baby";
    }
    else {
        cout << "Boris, you are punished!";
    }
    return 0;
}