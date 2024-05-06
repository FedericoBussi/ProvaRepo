#include<stdio.h>
#include<string.h>

int main(){
	char s[256];
	printf("Inserisci una stringa: ");
	leggiStringa(s,256);
	int conta=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') conta++;
	}
	printf("Ci sono %d vocali\n",conta);
	return 0;
}

void leggiStringa(char s[],int len){
	fgets(s,len,stdin);
	s[strlen(s)-1]='\0';
}
