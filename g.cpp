#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n;
    cin>>n;
    int ans=0;
    int placeValue = 1;
    while(n>0){
        int last=n%10;
        
        ans= ans+placeValue*last;
        placeValue=placeValue*2;
        n=n/10;
        
    }
    cout<<ans<<endl;
	
}
