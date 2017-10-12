#include <iostream>
using namespace std;
int sum(int array[],int arraysize){
	int x=0;
	for(int i=0;i<=arraysize-1;i++){
		x+=array[i];
	}
	return x;
}
int main() {
	int arraysize;
	cout<<"enter the size of the array";
	cin>>arraysize;
	int array[arraysize];
	for(int i=0;i<=arraysize-1; i++){
		cout<<"enter element number"<<i+1<<" ";
		cin>>array[i];
		
	}
	cout<<"sum is ";
	cout<<sum(array,arraysize)<<" ";
	// your code goes here
	return 0;
}
