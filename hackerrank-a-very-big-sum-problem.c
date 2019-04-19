#include<stdio.h>
#define max 1000
int main(){
	int ar[max];
	
	int n;
	scanf("%d",&n);
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	
	long long sum=0;
	
	for(i=0;i<n;i++){
		sum+=ar[i];
	}
	
	printf("%lli",sum);
}