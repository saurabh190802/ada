#include<stdio.h>
void insertion_sort(int arr[],int n){

	int temp,i,j;

	for(i=1;i<n;i++){
		temp = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;	
		}
		
	for(i=0;i<n;i++){
		printf("%d \t", arr[i]);
	}
}
int main(){
	printf("***INSERTION SORT***\n");
	printf("enter size of array? \n");
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter element for index %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	
	insertion_sort(arr,5);
	
	return 0;
}
