#include<stdio.h>
#include<string.h>
void input(char *input){
	printf("moi ban nhap mot chuoi: ");
	fgets(input,100,stdin);
}
void reverseString(char *a){
	int size=strlen(a);
	for(int i=size;i>-1;i--){
		printf("%c",a[i]);
	}
}
int main(){
	char inputString[100];
	input(inputString);
	printf("%s",inputString);
	reverseString(inputString);
	return 0;
}
