#include<iostream>
using namespace std;
	int main(){
		int l;
		cout<<"enter the number";
		cin>>l;
		for(int i=0;i<l;i++){
		//print stars
			for(int j=0;j<i+1;j++){
			//make copy of stars
				cout<<"*";
				}
			cout<<endl;
			}
		for(int a=l-1;a>0;a--){
				for(int b=0;b<a;b++){
					cout<<"*";
					}
			cout<<endl;
				}
return 0;
}
