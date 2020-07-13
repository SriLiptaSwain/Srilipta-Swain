#include<bits/stdc++.h>
using namespace std;

int get_majority_element(vector<int> &a, int left, int right) {
	int m=left,count=1;
	for(int i=left;i<right;i++){
		if(a[m]==a[i])
			count++;
		else
			count--;
		if(count==0){
			m=i;
			count=1;
		}
	}
	count=0;
	for(int i=left;i<right;i++)
		if(a[i]==a[m])
			count++;
	if(count>right/2)
		return 1;
	return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
