#include<stdio.h>
#define max 100

int main(){
	int i,j;
	int n;
	
	scanf("%d",&n);
	
	int ar[max];
	
	int sum1=0;
	int sum2=0;
	int y=n;
	
	for(j=0;j<n;j++){
		
		for(i=0;i<n;i++){
			scanf("%d",&ar[i]);	
		}
		
		sum1+=ar[j];
		sum2+=ar[y-1];
		y--;
	}
	
	printf("%d",abs(sum1-sum2));	
	
}