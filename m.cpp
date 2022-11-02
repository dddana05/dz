#include <iostream>
using namespace std;
int main (){
    int n,m,b,sum=0;
    cin >>n>>m>>b;
    int c[n];
    for (int i=0;i<n;i++){
        cout << m <<" ";
        
        sum=sum+m;
        m=m+b;
    }
    cout <<endl <<"sum:"<<" "<<sum;
}