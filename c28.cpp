#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    char a;
    cin >> s>>a;
    bool flag = true;
   s.push_back(a);
   for (int i=0; i<s.size(); i++){
    if(s[i]!=s[s.size()-i]){
      flag=false;
   }
    else {
       flag=true;
    }
   }
   if(flag){
    cout << "yes";
   }
   else {
    cout << "no";
   }
  
    return 0;
}

