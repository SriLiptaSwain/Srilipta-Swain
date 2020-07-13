#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a, int x,int l,int r) {
	if(l<r){
		int mid=(l+r-1)/2;
		if(a[mid]==x)
			return mid;
		if(a[mid]>x)
			return binary_search(a,x,l,mid);
		else if(a[mid]<x)
			return binary_search(a,x,mid+1,r);
	}
	return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    std::cout << binary_search(a, b[i],0,n) << ' ';
  }
}
