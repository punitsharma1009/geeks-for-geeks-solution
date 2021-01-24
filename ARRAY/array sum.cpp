#include <iostream>
using namespace std;

int main() {
    int item;
    cin>>item;
    int price[item];
    for(int i=0;i<item;i++){
        cin>>price[i];
    
    }
    // for(int i=0;i<digit;i++){
    //     cout<<price[i];
    // }
    int sum=0; 
    for(int i=0;i<item;i++){
        sum=sum+price[i];
    }
	cout<<sum;
	return 0;
// Deepesh
}
