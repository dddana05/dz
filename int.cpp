#include <bits/stdc++.h>
using namespace std;
int main (){
int n=57858;
int sum=0;
while (n>0){
    int m= n%10;
    sum+=m;
    n/=10;
}
cout << sum;
}