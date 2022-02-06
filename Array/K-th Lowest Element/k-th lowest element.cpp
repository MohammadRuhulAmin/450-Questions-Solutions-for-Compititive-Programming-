/*
	Author : Md Ruhul Amin
	Email :ruhulamin.cs.dev@gmail.com
	contact: 01322352864
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int range,k;
	cin >> range >> k;
	int array[range];
	for(int i = 0;i<range;i++)cin >> array[i];
	sort(array,array+range);
	cout << array[k-1];
	return 0;
}
