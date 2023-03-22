#include<iostream>
using namespace std; 

int binarySearch(int arr[],int start, int end, int key){
	if(start>end)		//element not found
	return false;
	int mid=start+(end-start)/2;
	if(arr[mid]==key)		//element found
	return true;
	
	if(arr[mid]<key){
		return binarySearch(arr,mid+1, end, key);
	}
	else{
		return binarySearch(arr, start, mid-1, key);
	}
	
}

int main(){
	int arr[5]={1,2,3,4,5};
	int size=5;
	int key=6;
	
	cout<<"present or not:"<<binarySearch(arr,0,4,6);
	
}
