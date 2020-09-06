#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int a[], int b[], int n, int m){
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i]<b[j]){
			cout<<a[i++]<<" ";
		}
		else if (b[j] < a[i]){
			cout<<b[j++]<<" ";
		}
	}

	while(i<n){
		cout<<a[i++]<<" ";
	}
	while(j<m){
		cout<<b[j++]<<" ";
	}
}

int main(){
	int a[] = {1, 3, 5, 7}; 
    int n = sizeof(a) / sizeof(a[0]); 
  
    int b[] = {2, 4, 6, 8}; 
    int m = sizeof(b) / sizeof(b[0]); 

    mergeArrays(a,b,n,m);

    return 0;
  
}