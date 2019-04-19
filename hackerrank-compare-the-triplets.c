#include<stdio.h>

int main(){

	int ar1[3];
	int ar2[3];
	int i,j;
  
	for(i=0;i<3;i++){
		scanf("%d",&ar1[i]);
	}
  
	for(i=0;i<3;i++){
		scanf("%d",&ar2[i]);
	}
	
	int sum1=0;
	int sum2=0;
	
	for(j=0;j<3;j++){
		if(ar1[j]>ar2[j]){
			sum1++;
		}
		else if(ar2[j]>ar1[j]){
			sum2++;
		}
		else{
			sum1=sum1;
		}
	}
	
	printf("%d %d",sum1,sum2);
}