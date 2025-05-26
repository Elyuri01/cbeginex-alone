# include <stdio.h>

//Write a program that prints its input one word per line.

int main() {
      
    int c;
    int inword = 0;

    while ((c = getchar()) != EOF) {
	    if (c == ' '|| c == '\t'|| c == '\n') {
		    inword = 0;
		  }
	    else if (inword == 0) {
		    inword = 1;
		    printf("\n");

	    }
	    if (inword) {
		    putchar(c);
	    }
                   
    
    }
    return 0;
}


