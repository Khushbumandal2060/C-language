#include<stdio.h>

int calcPercentage(int science, int math, int sanskrit);

int main(){
        int sc= 78;
        int math= 96;
        int sanskrit= 67;

        printf("percentage is : %d", calcPercentage(sc,math,sanskrit));

    return 0;
}
 
int calcPercentage(int science, int math, int sanskrit){
    return ((science + math + sanskrit)/3);
}