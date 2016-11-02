#include <iostream>
#include <set>

using namespace std;

int main (){

	set<int> s;

	string str;
	getline(cin,str);


	for(int i = 0 ; i < str.length(); ++i){
		int x = (int)str[i] - 48;
		if( x <= 9 && x >= 0){
			s.insert(x);
		}
	}

	for(set<int>::iterator i = s.begin(); i != s.end(); ++i){
		cout << *i << " ";
	}

	return 0;	

}

