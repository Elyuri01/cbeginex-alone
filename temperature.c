#include <stdio.h>

#define LOWER 0      // lower limit of table
#define UPPER 300   // upper limit of table
#define STEP 20    // step size

// Fahrenheit to Celisius table
 
int main() {
    int fahr;
    for (fahr = 300; fahr >= 0; fahr = fahr-20)
	printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr-32));

    return 0;
}


