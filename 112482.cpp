#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	vector<int> v;
	int n,x;

	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> x;
		v.push_back(x);
	}

	//sort(v.rbegin(),v.rend());
	sort(v.begin(),v.end());
	
	for(int i = 0; i < n; ++i){
		cout << v[i] << " ";
	}

	return 0;
}