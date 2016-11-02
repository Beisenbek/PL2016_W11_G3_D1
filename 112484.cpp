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
	
	for(int i = n - 1; i >= 0; --i){
		cout << v[i] << " ";
	}

	return 0;
}
