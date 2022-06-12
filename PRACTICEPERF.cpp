#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int p[4]={0};
	int count=0;
	for(int i=0;i<4;i++){
	    cin>>p[i];
	    if(p[i]>=10){
	        count++;
	    }
	}
	cout<<count<<endl;
	return 0;
}
