#include<stdio.h>
int main() {

    int sum = 0;
    for(int i = 0; i<=5; i++) {
        if(i % 2 == 0) {
            sum = sum * 10 + 1;
            printf("%d\n",sum);
        }else{
            sum = sum * 10;
            printf("%d\n",sum);
        }

    }
    
    return 0;
}