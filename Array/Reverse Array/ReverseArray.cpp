#include<bits/stdc++.h>
using namespace std;

int main(){
	cout << "QN: Reverse the String or an Array Element\n";
	int range;
	cout << "Enter Range : \n";
	cin >> range;
	int array[range];
	cout << "Enter Input of the Array :\n";
	for(int i = 0;i<range;i++)cin >> array[i];
	for(int i = range-1;i>=0;i--)cout << array[i] <<" ";
	cout << endl;
	string str;
	cout << "Enter String Element:\n";
	cin >> str;
	for(int i = str.length() -1;i>=0;i--)cout << str[i] << " ";
	return 0;
}
