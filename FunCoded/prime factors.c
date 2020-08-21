//prime factors of number n
#include <stdio.h>
int prime_memo(int n);
int main(){
	int n;
	scanf("%d",&n);
	while(n>1){
		int i=2;
		while(i<=n)
			{
				if(prime_memo(i))
					if(n%i==0)
						{
							printf("%d ",i);
							n=n/i;
							break;
						}
				i++;
			}
	}
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
