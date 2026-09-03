#include<stdio.h>
#include<stdbool.h>
int main(){
	int age=15;
	float height=5.4;
	double pie=3.14;
	char ch='w';
	bool is_active=true;
	printf("age:%d,size:%zu bytes\n",age,sizeof(age));
	printf("height:%f,size:%zu bytes\n",height,sizeof(height));
	printf("pie:%lf,size:%zu bytes\n",pie,sizeof(pie));
	printf("character:%c,size:%zu bytes \n",ch,sizeof(ch));
	printf("bool:%d,size:%zu bytes \n",is_active,sizeof(is_active));
	return 0;
}
