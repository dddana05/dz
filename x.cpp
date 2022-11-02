#include <iostream>

using namespace std;

int main(){
    int m,n,b;
    cin>>m>>n>>b; 
    if (m==b & n!=m){
          cout <<"YES";
    }
    else if (n==b & b!=m){
       cout <<"YES";   
    }
    else if (n==m & n!=b){
        cout <<"YES";
    }
    else {
          cout <<"NO";
    }
}