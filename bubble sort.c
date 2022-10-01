#include<stdio.h>
void bubble_sort(int a[],int n){
	int i;
	int j,temp=0;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j+1]<a[j]){
				temp = a[j+1];
				a[j+1]	= a[j];
				a[j] = temp;
			}
		}
	}
	printf("The sorted array is : \n");
	for(i=0;i<n;i++){
		printf("%d\t", a[i]);
	}
}
int main(){
	int a[] = {10,8,50,7,4};
	bubble_sort(a,5);
	return 0;
}
