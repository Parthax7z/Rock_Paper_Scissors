#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char player;
    srand(time(NULL));
    // 0 ----> rock
    // 1 ----> paper
    // 2 ----> scissors
    printf("Rock Paper Scissors Game\n");
    printf("Choose 0 for Rock, 1 for Paper and 2 for Scissors\n");
    printf("Enter your choice :\n");
    scanf("%d", &player);
    int computer = rand() % 3;
    printf("You Chose :\n");
    if(player == 0){
        printf("Rock\n");
    }
    else if(player == 1){
        printf("Paper\n");
    }
    else if(player == 2){
        printf("Scissors\n");
    }
    else{
        printf("Invalid Input");
        return 1;
    }
    printf("Computer Chose :\n");
    if(computer == 0){
        printf("Rock\n");
    }
    else if(computer == 1){
        printf("Paper\n");
    }
    else if(computer == 2){
        printf("Scissors\n");
    }

    if(player == computer){
        printf("It's a Draw!\n");
    }
    else if ( player == 0 && computer == 2 ||
    player == 1 && computer == 0 ||
    player == 2 && computer == 1){
        printf("Congrats! You Win!");
    }
    else{
        printf("Computer Wins! Better luck next time!");
    }
    return 0;
}