# include <stdio.h>

//Write a program that copies input to output, but replaces any series of repeated . (dots) with a single .
//in second delared variable we will use a memory flag lastcdot which means last character was a dot

int main() {
    
    int c; 
    int lastcdot = 0;

    while ((c = getchar()) != EOF) {
	 if (c == '.') {
	      if (!lastcdot) {		      
		      putchar('.');
		      lastcdot = 1;
	      }
	 }
	      else {
		      putchar(c);
		      lastcdot = 0;
	      }
    }
    return 0;
}


    
    	
