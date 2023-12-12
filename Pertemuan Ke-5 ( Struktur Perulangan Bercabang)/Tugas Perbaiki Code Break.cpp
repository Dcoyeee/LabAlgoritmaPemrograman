#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,bil;
	a=3;
	b=2;
	c=1;
	
	printf("Bil-A   | Bil-B | Bil-C\n");
	printf("======================");
	for(bil=1; bil<=10; bil++){
		a+=b; 
		b+=c;
		c+=2;
		printf("\n%d\t|%d\t|%d\t",a,b,c);
		if(c == 13)
		break;
	}
	getche();
}

