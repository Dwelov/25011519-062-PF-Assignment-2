#include <iostream>
using namespace std; 
int main(){
	int num;
	cout<<"Enter the number to check if it is even or not"<<endl;
    cin>>num;
    
	if(num % 2 == 0){
		cout<<num<<" is even."<<endl;
	}else{
	    cout<<num<<" is odd."<<endl;
	}
  
  cout<<endl<<string(10,'-')<<"Loop checking"<<string(10,'-')<<endl<<endl;
  
	for(int i=1;i<=num;i+=2){
		if(i == num){
		 cout<<num<<" is odd.";
		}
	}
	
	for(int i=2;i<=num;i+=2){
		if(i == num){
		 cout<<num<<" is even.";
		}
	}
	
	return 0;
}