#include<stdio.h>
#define max 1000
int main(){
	int ar[max];
	
	int n;
	scanf("%d",&n);
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
		if(ar[i]>10000){
			break;
		}
	}
	for(i=n-1;i>-1;i--){
		printf("%d ",ar[i]);
	}
}