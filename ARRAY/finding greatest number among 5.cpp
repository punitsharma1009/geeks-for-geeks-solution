#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3,n4,n5;
    cin >> n1 >> n2 >> n3>>n4>>n5;

    if(n1 >= n2 && n1 >= n3 && n1>=n4 && n1>=n5)
        cout << "Largest number "<<n1;

    if(n2 >= n1 && n2 >= n3 && n2>=n4 && n2>=n5)
        cout << "Largest number "<<n2;
    
    if(n3 >= n1 && n3 >= n2 && n3>=n4 && n3>=n5)
        cout << "greatest number "<<n3;
    if(n4 >= n1 && n4 >= n2 && n4>=n3 && n4>=n5)
        cout << "greatest number "<<n4;
    if(n5>= n1 && n5 >= n2 && n5>=n3 && n5>=n4)
    cout << "greatest number "<<n5;
	return 0;
}
