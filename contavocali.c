#include<stdio.h>
#include<string.h>

void leggiStringa(char s[],int len);

int main(){
	//inserisci la password
	char s[256];
	printf("Inserisci una stringa: ");
	leggiStringa(s,256);
	int conta=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') conta++;
	}
	printf("Ci sono %d vocali\n",conta);
	return 0;
}

void leggiStringa(char s[],int len){
	fgets(s,len,stdin);
	s[strlen(s)-1]='\0';
}
