#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   int X,Y;
   for(int i=0;i<t;i++){
       cin>>X>>Y;
       if(X>Y){
       cout<<X-Y<<endl;
       }
       else{
           cout<<Y-X<<endl;
       }
   }
	return 0;
}
