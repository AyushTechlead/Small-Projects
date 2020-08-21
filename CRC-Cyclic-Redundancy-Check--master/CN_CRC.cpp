#include <bits/stdc++.h>
using namespace std;
int len(int n){
	int count = 0;
	while(n){
		count++;
		n/=10;
	}
	return count;
}
int main(){
	int item,div;
	vector<int> Number;
	cout<<"Now enter the number";
	cin>>item;
	while(item){
		Number.push_back(item%10);
		item/=10;
	}
	reverse(Number.begin(), Number.end());
	cout<<"Enter the divisior";
	cin>>div;
	//find the length of divisior 
	int lDiv = len(div);
	//append the remaining digits of lDiv
	lDiv--;
	while(lDiv){
		Number.push_back(0);
		lDiv--;
	}
	//transform div into vector
	vector<int> divisior;
	while(div){
		divisior.push_back(div%10);
		div /= 10;
	}
	int cx=0;
	//XOR divisor with Number 
	for(int i =0;i<Number.size() - divisior.size() + 1;i++){
		if(Number[i] == 1)
			{for(int j = 0;j<divisior.size();j++)
				Number[j+cx] = Number[j+cx] ^ divisior[j]; 	
		}
		cx++;
	}
	cout<<endl;
	for (auto it = Number.begin(); it != Number.end(); it++) 
	    cout << *it;
	return 0;
}