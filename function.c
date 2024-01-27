#include<stdio.h>

/*write 2 function one to print hello and 
second to print goodbye*/

void printHello();
void printGoodbye();

int main(){
    printHello();
    printGoodbye();
    printHello();
    return 0;
}

void printHello(){
    printf("Hello!\n");
}

void printGoodbye(){
    printf("Goodbye:)\n");
}