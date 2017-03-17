#include<stdio.h>

#define IN  1
#define OUT 0

int
main(){

    int c;
    int state;

    while((c = getchar()) != EOF){

        if (c != ' '){
            putchar(c);
            state = IN;
        } 
        else
        if (c == ' ' && state == IN){
            putchar(c);
            state = OUT;
        }
    }
}
