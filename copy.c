#include <stdio.h>

//count blanks tabs and newlines

int main() {
    
   long c = 0, bl = 0, tab = 0, nl = 0;
   

   while ((c = getchar()) != EOF) {
   
   if (c == ' ') {
       ++bl; }
   else if (c == '\t') {
	   ++tab; }
   else if (c == '\n') {
	   ++nl; }
   }

   printf(" The number of pressed blanks is %ld\n", bl);
   printf(" The number of pressed tabs is  %ld\n", tab);
   printf("Finally The number of pressed newlines is %ld\n", nl);
   
   return 0;

}    	    
