//right triangle star pattern
#include<iostream>
using namespace std;
int main(){
int i,j,k,l;
cout<<"enter the number of line:";
cin>>l;
	for(int i=0;i<l;i++){
	//print stars
		for(int j=0;j<=i;j++){
				cout<<"*";						
				}		
		cout<<endl;	
		}
return 0;
}
