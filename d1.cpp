#include <iostream>

using namespace std;

int main()
{int n;
cin >>n;
if (n%2==0){
    cout <<2;
}

else {
for (int i=3;i<=n;i++){
    if (n%i==0){
        cout << i;
        break;
    }
    
}
}
return 0;

}