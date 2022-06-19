#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    for(int i=0;i<t;i++){
       
       int N;
       cin>>N;
       int arr[N];
       int sum=0;
        for(int j=0;j<N;j++){
            cin>>arr[j];
            
            sum=sum+arr[j];
            
        }
        if(sum %2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    }
	return 0;
}
