#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n ;
	int ar[100];
	
	float sumz=0.0;
	float sump=0.0;
	float sumn=0.0;
	
	for(int i=0;i<n;i++){
		cin >> ar[i];
		if(ar[i]>0){
			sump++;
		}
		else if(ar[i]<0){
			sumn++;
		}else{
			sumz++;
		}
	}
	
	cout << sump/n << endl;
	cout << sumn/n << endl;
	cout << sumz/n << endl;
	
}