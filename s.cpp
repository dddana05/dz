#include <bits/stdc++.h>
using namespace std;
int main () {

    string s;
    cin >> s;
    int cntCapital=0, cntSmall=0;
    
    for (int i=0; i < s.size(); i++){
        if (s [i] >= 'A' && s[i]<='Z'){
             cntCapital++;
        }
        else if (s[i]>= 'a' && s[i] <= 'z'){
            cntSmall++;
        }

}
cout << cntSmall << ' ' << cntCapital << endl;

return 0;
}
    