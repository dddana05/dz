#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, s = 0 ;
    cin >> n;
    while ( n > 0)
    {
      if (s % 7 == 0)
      {  
      s++;
      continue;
      }
      else if (s % 2 == 0){
        n-=4;
    
      }
      else if (s%2==1){
        n+=3;
    
      }
      s++;
    }
    cout <<s;
}
