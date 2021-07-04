#include<iostream>
using namespace std;

int main(){
	int n, arr[n];
	cout<<"Enter the numbers of elements of the array: ";
	cin>>n;
	cout<<"\nEnter elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	/*
	cout<<"You entered: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	*/
	
	int *p;
	p=arr;
		cout<<"You entered: ";
	for(int i=0;i<n;i++){
		cout<<*p<<endl;
		p++;
	}
	
	return 0;
}
