#include<stdio.h>

void insertion_sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		temp = a[i];
		j = i-1;
		while(j>=0 && a[j]>temp){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
	printf("The sorted array is : \n");
	for(i=0;i<n;i++){
		printf("%d\t", a[i]);
	}
}

int main(){
	printf("_____INSERTION SORT_____\n");
	int n,i;
	printf("Enter Size Of Array? \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element for index %d ",i+1);
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	return 0;
}

