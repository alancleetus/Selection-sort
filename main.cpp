#include<iostream>
using namespace std;

int main(){
	
	int arr[5]={5,4,3,1,2};
	
	for(int i=0;i<5;i++){
		
		for(int j=0;j<=5;j++){
		int f= arr[i];
		int s= arr[j];
		
		if(f<s){
			
			arr[i]=s;
			arr[j]=f;
		}
		
		}
		
	}
	
	for(int i=0;i<5;i++){
	
		cout<<arr[i]<<endl;
	}
		
	
	return 0;
}


