
#include<stdio.h>
int binary_search(int a[],int size,int ele){
	int mid,low,high;
	low=0;
	high=size-1;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==ele){
			return mid;
		}
		if(ele>a[mid]){
		
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	
	return -1;
	
}
int main(){
	int arr[]={5,6,7,8,10,45};
	int s=sizeof(arr)/sizeof(int);
	int a=binary_search(arr,s,6);
	printf("the element is at index %d",a);
	

	
}
