//week05-4.c UVA1022 Decode the Mad man
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char s[] = "12345678990-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	
	char c;
	while( scanf("%c", &c) == 1 ){
		c = tolower(c);
		
		if(c==' '|| c=='\n') printf("%c", c);
		else{
			c = *(strchr(s,c)-2);
			printf("%c", c);
		}
	}
}