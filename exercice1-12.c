# include <stdio.h>

// Write a program that prints its input one word per line.

int main() 
{
   int c;
   int inword = 0;
   int firstword = 0;

   while ((c = getchar()) != EOF) {
	   if (c == ' '|| c == '\t'|| c == '\n') {
		   inword = 0;
	   }
	   else if (inword == 0) {
		   inword = 1;
		   firstword = 1;
		   
		   } 
	    if (firstword == 1) {
                          firstword = 0;
                          printf("\n");
	    }

	   putchar(c);
   }
   
   return 0; 
}
