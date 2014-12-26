#include <iostream>
#include <string>
#include <vector>
using namespace std;
// using string and functional programming 
string str_add(string s1, string s2, int carry){
	int s1Sz = s1.length(), s2Sz = s2.length();
	string ans;
	if(s1Sz == 0 and s2Sz == 0){
		ans = carry + '0';
		return ans;
	} 	

	if(s1Sz != 0 and s2Sz != 0){
		int last1 = s1[s1Sz - 1], last2 = s2[s2Sz - 1], sum, lastDigit, newCarry;
		sum = last1 + last2 + carry;
		lastDigit = sum%10;
		newCarry = sum/10;
		s1.pop_back();
		s2.pop_back();
		string prefix, suffix;
		prefix = str_add(s1, s2, newCarry);
		suffix = lastDigit + '0';
		prefix.append(suffix);
		return prefix;
	}
	return "i am at last";
}

int main(){

	string s1, s2;
	//cin >> s1;
	//cin >> s2;
	string result = str_add("8","8", 1);
	cout << result;
	
}
