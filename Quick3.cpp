#include<bits/stdc++.h>
using namespace std;

void partition(int a[],int l,int r,int *x,int* y){
	if(l<r){
    	int piv=a[l],j=l;
    	for(int i=l+1;i<=r;i++)
    		if(a[i]<=piv)
    			swap(a[i],a[++j]);
    	swap(a[l],a[j]);
    	*x = j;
    	if(a[l]==a[j])
    		*y=l;
    	else
    		*y=j;
	}
}

void quicksort(int a[],int l,int r){
    if(l<r){
    	int rnd = l+rand()%(r+1-l);
    	swap(a[rnd],a[l]);
    	int x,y;
		partition(a,l,r,&x,&y);
    	quicksort(a,l,x-1);
    	quicksort(a,y+1,r);
    }
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];	
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
	return 0;
}
