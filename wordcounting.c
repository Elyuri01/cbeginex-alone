# include <stdio.h>
 
/*Write a C program that reads input and counts how many “words” it contains, where a word is any sequence of non-blank
   (space, tab, or newline) characters.*/
int main() {
    
    int c;
    long wordcount = 0;
    int inword = 0;

    while ((c = getchar()) != EOF) {
	    if (c == ' '|| c == '\t'|| c == '\n') {
		    inword = 0;
	    }
	    else if (inword == 0) {
		    inword = 1;
		    ++wordcount;
		    
	    }
    }
    printf("words = %ld", wordcount);

    return 0;
}
