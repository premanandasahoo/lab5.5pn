//hollow square star patterns
#include<iostream>
using namespace std;
int main(){
	int i,J,k,l;
	cout<<"enter the line l:";
	cin>>l;
	for(int i=0;i<l;i++){
		// type some stars
		if(i==0 || i==(l-1)){
			// type 1st row & last row
			for(int j=0;j<l;j++){
				cout<<"*";
			}
		}
		else{
			 // PRINT STAR
				cout<<"*";
			// PRINT L - 2 SPACE
					for(int k=0;k<(l-2);k++){
						cout<<" ";
}
			// PRINT STAR
				cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
