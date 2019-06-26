#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	int i;
	unsigned long long fact = 1; 
	
//	printf("Enter An Integer: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		fact *= i;		
	}
	
	printf("%d",fact);
	return 0;
}
