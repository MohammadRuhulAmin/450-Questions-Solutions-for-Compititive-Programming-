/*
	Author : Md Ruhul Amin
	Email :ruhulamin.cs.dev@gmail.com
	contact: 01322352864
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int range1;
	int range2;
	cin >> range1 >> range2;
	int array[range1];
	int brray[range2];
	for(int i = 0;i<range1;i++)cin >> array[i];
	for(int i = 0;i<range2;i++)cin >> brray[i];
	vector<int>set;
	for(int i = 0;i<range1;i++){
		if(array[i]!=-1){
			for(int j = 0;j<range1;j++){
				if(i!=j){
					if(array[i] == array[j])array[j] = -1;
				}
			}
		}
		for(int j = 0;j<range2;j++){
			if(array[i] == brray[j]){
				brray[j] = -1;
			}
		}
	}
	
	for(int i = 0;i<range1;i++){
		if(array[i]!=-1)set.push_back(array[i]);
	}
	for(int i = 0;i<range2;i++){
		set.push_back(brray[i]);
	}
	for(int i = 0;i<set.size();i++)cout << set[i] << " ";
	return 0;
}
