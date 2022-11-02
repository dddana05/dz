#include <iostream>

#include<cmath>

using namespace std;

 int main () {
    int v;

    cin >> v;

    if ( v % 4 ==0) {

        cout << "YES";

} else if ( v % 400 ==0) {

        cout << "YES";

}else  {
        
    cout << "NO";
}
 
 return 0;

  }



