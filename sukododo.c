#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int count = 0;
    int num;
    int i = 0;
    char name[20];

    printf("Who are you?\n");
    printf("> ");
    scanf("%s",name);
    printf("Hello, %s!\n",name);

    printf("Tossing a coin...\n");
    srand(time(NULL));
    for(i = 0 ; i < 3 ; i++){
        printf("Round %d: ",i+1);
        if((rand()%2)==0){
           printf("Heads\n"); 
           count++;
        }else{ 
    printf("Tails\n");
    num++;
    }
    }
    printf("Heads: %d, Tails: %d\n",count,num);
    
    if(count > num){
        printf("You won!\n");
    }else{
        printf("You lost!\n");
    }

}