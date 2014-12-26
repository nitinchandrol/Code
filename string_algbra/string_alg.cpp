#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
// using string and looping
string str_add_int(string s1, int carry){
	int strSz = s1.length();
	if(carry == 0)
		return s1;
	if(strSz == 0){
		string ans;
		ans = carry + '0';
		return ans;
	}

	int last1 = s1[strSz - 1], sum, lastDigit, newCarry;
	sum = last1 + carry;
	lastDigit = sum%10;
	newCarry = sum/10;
	s1.resize(strSz - 1);
	string prefix = str_add_int(s1, newCarry), suffix;
	sprintf(suffix, "%d", lastDigit);
	prefix.append(suffix);
	return prefix;
}
/*
string str_add(string s1, string s2){
	int s1Sz = s1.length(), s2Sz = s2.length();
	string ans;

	if(s1Sz == 0 and s2Sz == 0){
		ans = carry + '0';
		return ans;
	} 	

	if(s1Sz != 0 and s2Sz != 0){
		
	}
	return "i am at last";
}*/

int main(){

	string s1, s2;
	//cin >> s1;
	//cin >> s2;
	string result = str_add_int("8",8);
	cout << result;
	
}
