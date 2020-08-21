//number divisible by all number from 1 to 20.
#include <bits/stdc++.h>
int prime_memo(int n);
int main(){
	int no=0,i=2,nth=10001;
	while(no < nth){
		if(prime_memo(i))
			no++;
		i++;	
	}

	printf("\n%d",i-1);
	return 0;
}
int prime_memo(int n){
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else{
		for(int i=2;i<n;i++)
			if(n%i==0)
				return 0;
		return 1;	
	}
}
