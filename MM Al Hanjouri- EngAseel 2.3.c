#include <stdio.h>
int main ()
{
	char x;
	printf ("Enter a letter:\n");
	scanf ("%c",&x);
		
	switch (x)
	{
		case 'E':
		printf ("Excellent");
		break;
		
		case 'V':
		printf ("Very good");
		break;
		
		case 'G':
		printf ("Good");
		break;
		
		case 'A':
		printf ("Average");
		break;
		
		case 'F':
		printf ("Fail");
		break;
		
	default: printf ("Error, please enter a valid letter");
	} 
				
}
