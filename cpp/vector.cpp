#include <bits/stdc++.h>

using namespace std;

void printVec(vector<int> vec) {
	// printing all values of a vector
	for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
		cout << *iter << " ";
	}
	cout << '\n';
	
	// another way to print the vector values
	/* 
	for (auto num : vec) {
		cout << num << " ";
	}
	cout << '\n';
	*/
}

int main() {
	vector<int> vec; // empty vector with size 0
	vector<int> vec2(5); // empty vector with initial size 5;
	cout << vec.size() << " " << vec2.size() << '\n';
	cout << "---------\n";
	cout << vec2[6] << '\n';
	// cout << vec2.at(7) << '\n'; // runtime error
	int arr[3];
	//int *p = arr;
	cout << "-----\n";
	cout << arr[3] << '\n';
	//cout << p[3] << '\n';
	
	vector<int> vec3(4, 5); // vector with size 4 and default value 5;
	cout << vec3[3] << '\n';
	
	vec3.push_back(24); // complexity of push_back is O(1)
	vec3[2] = 99;
	printVec(vec3);
	
	vector<int> vec4 = {32, 5, 29, 2};
	cout << vec4.size() << '\n';
	
	vec4 .resize(30);
	cout << vec4.size() << '\n';
	
	vector<int> v = {4, 2, 5, 1};
	sort(v.rbegin(), v.rend()); // this sorts the vector in decreasing order
	printVec(v);
	
	sort(v.begin(), v.end()); // this sorts the vector in increasing order
	printVec(v);
	
	// Reverse a vector
	reverse(v.begin(), v.end());
	printVec(v);
	
	vector<int> vec5(4);
	vec5.push_back(88);
	cout << vec5[4] << '\n';
	for (int num : vec5) {
		cout << num << " ";
	}
	cout << '\n';
	vec5.pop_back();
	for (int num : vec5) {
		cout << num << " ";
	}
	cout << '\n';
	return 0;
}
