#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void concat(char s1[20],char s2[20]){
	char s3[50];
	strcpy(s3,s1);
	strcat(s3,s2);
	printf("The concatenated string : %s",s3);
	return;
}

int main(){
	char s1[20];
	char s2[20];
	char s3[50];
	printf("Enter the first string :");
	fflush(stdin);
	scanf("%s",&s1);
	printf("Enter the second string :");
	fflush(stdin);
	scanf("%s",&s2);
	concat(s1,s2);
	return 0;
}
