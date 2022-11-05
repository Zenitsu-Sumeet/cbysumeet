#include <stdio.h>


long long fact(n){
    if (n==1)
     return 1;
    return (n*fact(n-1));
}
int main(){
	printf("enter the number:");
	int n;
	scanf("%d",&n);
    printf("%d",fact(n));
    
}