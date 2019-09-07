#include <iostream>
#include <vector>
using namespace std;

main(){
	
	vector<int> v(3);
	for(int i=0;i<v.size();i++){
		v[i]=i;
		cout<<v[i];
	}

	v.push_back(4);
	v.push_back(5);
	cout<<v.size();

	cout<<v.front();
	cout<<v.back();
	


	return 0;
}