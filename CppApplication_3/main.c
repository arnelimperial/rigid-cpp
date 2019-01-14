#include <stdio.h>

int squareFunction(int num){
    int result = num * num;
    return result;
}


int main() {
    
    printf("Enter an integer: ");
	
    int entry;
	
    scanf ("%d", &entry);
	
    int solution= squareFunction(entry);
  
   printf ("\nThe square of the number you entered is %d\n", solution);
   //squareFunction(entry);
   return 0;
}

