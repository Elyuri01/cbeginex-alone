# include <stdio.h>
 //lastcbl means last character is a blank
// copy input to output and replace each string of blanks with a single blank

int main ()
{
    int c;
    int lastcbl = 0;
    
    while ((c = getchar()) != EOF) {
	    if (c == ' ') {
		    if (!lastcbl) {
			    putchar(' ');
			    lastcbl = 1;
		    }
			  
		   
	   

	    }
	    else {
		    putchar(c);
		    lastcbl = 0;
	    }
    }

	     
   
    return 0;
}
	    
