#include <stdio.h>
int main ()
{
	int x;
	printf ("Enter week number\n");
	scanf ("%d",&x);
	if (x>=1 && x<=7)
	{
		switch (x)
		{
			case 1:
				x==1;
				printf ("The %dst day is Saturday",x);
				break;
			case 2:
				x==2;
				printf ("The %dnd day is Sunday",x);
				break;	
			case 3:
				x==3;
				printf ("The %drd day is Monday",x);
				break;
			case 4:
				x==4;
				printf ("The %dth day is Tuesday",x);
				break;
			case 5:
				x==5;
				printf ("The %dth day is Wednesday",x);
				break;
			case 6:
				x==6;
				printf ("The %dth day is Thursday",x);
				break;	
			case 7:
				x==7;
				printf ("The %dth day is Friday",x);
				break;	
	}
		
	    }
	else {
	    printf ("Error");
	}
		
}
