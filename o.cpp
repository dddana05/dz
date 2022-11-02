#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int m,n,b,v,c;
    cin >>m;
 n=m%10;
 b=m/10%10;
 v=m/100%10;
 c=m/1000;
 if (m==n*1000+b*100+v*10+c){
     cout << "Yes";
 }
 else {
     cout <<"No";
     
 }

}