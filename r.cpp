#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n,sum=0,mu=1,a ;
    cin >>n;
    while(n!=0){
        a=n%10;
        n=n/10;
        sum=sum+a;
        mu=mu*a;
       
    
    }
    cout <<sum+mu;
    
}