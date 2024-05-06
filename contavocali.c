#include<stdio.h>
#include<string.h>

int main(){
	char s[256];
	printf("Inserisci una stringa: ");
	scanf("%s",s);
	int conta=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') conta++;
	}
	printf("Ci sono %d vocali\n",conta);
	return 0;
}
