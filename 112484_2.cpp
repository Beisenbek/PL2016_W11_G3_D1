#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int a, int b){
	if(b > a) return false;
	return true;
}

int main(){
	
	vector<int> v;
	int n,x;

	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> x;
		v.push_back(x);
	}

	int l = 0;
	int r = n - 1;

	while(l < r){
		swap(v[l],v[r]);
		l++;
		r--;
	}

	for(int i = 0; i < n; ++i){
		cout << v[i] << " ";
	}


	return 0;
}
