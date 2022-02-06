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
	int max = INT_MIN;
	int min = INT_MAX;
	for(int i = 0;i<range;i++){
		if(array[i]>max)max = array[i];
		if(array[i]<min)min = array[i];
	}
	cout << "Maximum Element : " << max << " Minimum Element : " << min << endl; 
	return 0;
}
