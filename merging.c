#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void merge(int *a,int *l,int leftcount,int *r,int rightcount){
	int i=0,j=0,k=0;
	while(i<leftcount && j<rightcount){
	if(l[i]<r[j]){
		a[k++]=l[i++];
	}	
	else
	a[k++]=r[j++];
}
while(i<leftcount){
	a[k++]=l[i++];
	
}
	while(j<rightcount){
		a[k++]=r[j++];
	}	
	}
void mergesort(int *a,int n){
	int mid,*l,*r,i;
	mid=n/2;
	if(n<2)
	return;
	l=(int*)malloc(mid*sizeof(int));
	r=(int*)malloc((n-mid)*sizeof(int));
	for(i=0;i<mid;i++)
	l[i]=a[i];
	for(i=mid;i<n;i++)
	r[i-mid]=a[i];
	mergesort(l,mid);
	mergesort(r,n-mid);
	merge(a,l,mid,r,n-mid);
}
int main(){
	int n,k,i;
	printf("enter size ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	k=sizeof(a)/sizeof(int);
	mergesort(a,k);
	for(i=0;i<k;i++)
	printf("%d ",a[i]);
	}
	

