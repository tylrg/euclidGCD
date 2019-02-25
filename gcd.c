#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){	
	if(b==0){return a;}	
	int x=0;
	while(a>=(b*x)){x++;}
	x--;	
	int n= a-(b*x);
	int foo = gcd(b,n);
	return foo;
}
int main(int argv, char* argc[]){
	int a= atoi(argc[1]);
	int b= atoi(argc[2]);
	if(a==b && a==0){printf("GCD of 0 and 0 is undefined!\n");return 1;}
	int d= gcd(a,b);
	printf("The GCD of %d and %d is: %d\n",a,b,d);
	return 0;	
}
