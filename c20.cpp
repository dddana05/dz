#include <bits/stdc++.h>
using namespace std;
int main () {
    bool flag =false;
    char a;
    cin >>a;
   
        if((a <= '9')&& (a>= '1')){
            flag=true;

        }
        else {
            flag = false;
        }
    
        if (flag){
            cout<< "yes";
        }
        else {
            cout<<"no";
        }
        return 0;
    
}