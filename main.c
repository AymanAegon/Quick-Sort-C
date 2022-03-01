#include <stdio.h>

void quickSort(int *a,int l,int start,int end){
	if(start < end){
		int pv = sorting(a,l,start,end);
		
		quickSort(a,pv,start,pv-1);
		quickSort(a,l-pv-1,pv+1,end);	
	}
}

int sorting(int *a,int l,int start,int end){
	int i=start-1,j;
	int x , p = end;
	for(j=start; j<l; j++){
		if(*(a+j)<*(a+p)){
			i++;
			x=*(a+j);*(a+j)=*(a+i);*(a+i)=x;
		}
	}
	x=*(a+p);*(a+p)=*(a+i+1);*(a+i+1)=x;
	return (i+1);
}

int main() {
	int n = 5,m=1;
	int a[5] = {5,1,0,7,1};
	int i;	//  1,0,3,6,5
	
	quickSort(a,n,0,n-1);
	for(i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
	
}
