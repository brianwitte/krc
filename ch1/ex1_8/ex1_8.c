#include<stdio.h>

int
main(){
    
    int c;
    int counter;

    while((c = getchar()) != EOF){
        
        if(c == '\n')
            counter++;
        else
        if(c == '\t')
            counter++;
        else
        if(c == ' ')
            counter++;
    }
    printf("Counter: %d", counter);
}
