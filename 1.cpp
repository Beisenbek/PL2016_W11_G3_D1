#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){

	vector<int> v;

	int k;

	while(true){
		cin >> k;
		if(k == 0) break;
		v.push_back(k);
	}


	reverse(v.begin(),v.begin() + v.size()/2);	
	reverse(v.begin() + v.size()/2,v.end());	

	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}


	return 0;	
}

