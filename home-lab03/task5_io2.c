#include<stdio.h>
int main(){
	char fullname[100];
	printf("Enter your full name: ");
	fgets(fullname,100,stdin);
	printf("You entered:\n");
	puts(fullname);
	return 0;
}
