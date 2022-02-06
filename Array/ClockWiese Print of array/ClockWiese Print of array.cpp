/*
	Author : Md Ruhul Amin
	Email :ruhulamin.cs.dev@gmail.com
	contact: 01322352864
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int range;
	cin >> range;
	int array[range];
	for(int i = 0;i<range;i++)cin >> array[i];
	cout << array[range-1] <<" ";
	for(int i = 0;i<=range-2;i++)cout << array[i] << " ";
	return 0;
}
