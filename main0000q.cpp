#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 
   int a[10];
    int i;
    int greatest;
    printf("Enter ten values:");
    //Store 10 numbers in an array
    for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
    }
    //Assume that a[0] is greatest
    greatest = a[0];
    for (i = 0; i < 10; i++) {
if (a[i] > greatest) {
greatest = a[i];
    }
    }
    printf("Greatest of ten numbers is %d", greatest);
	
	return 0;
}
