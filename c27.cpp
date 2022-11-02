#include <iostream>

using namespace std;

int main(){
    bool flag=false;
    int cnt=0;
     string s1;
     string s2;
     cin >> s1>>s2;
     for(int i=0; i<s1.size(); i++){
        for (int j=0; j<s2.size(); j++){
            if (s1[i+j]== s2[j]){
                cnt++;

            }
            if(cnt=s2.size()){
                flag=true;
                break;
            }
        }
     }
     if(flag){
        cout<<"yes";
     }
     else {
        cout<< "no";
     }
     return 0;
}
