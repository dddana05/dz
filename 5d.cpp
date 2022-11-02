#include <bits/stdc++.h>
using namespace std;

    int main (){
        string s;
        cin >> s;
        bool flag = true;
        for (int i=0; i < s.size(); i++){
            if (s[i]!= s[s.size()-i-1]){
                flag = false;
            }
        }

        if(flag){
            cout << "YES";
    
        }
        else {
            cout << "NO";
        }
        return 0;

    }

    

    