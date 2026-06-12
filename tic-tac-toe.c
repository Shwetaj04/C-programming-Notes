#include <stdlib.h>
#include <stdio.h>
int main(){
    char board[3][3]={
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    };
    int row,col;
    char player;
    for(int i=0;i<9;i++){
        player=(i%2==0)?'X':'O';
        printf("Player %c enter the row and column (0-2):",player);
        scanf("%d %d",&row,&col);
        if(board[row][col]==' '){
            board[row][col]=player;
        }else{
            printf("cell already occupied try again\n");
            i--;
        };
        printf("Final board:\n");
        printf("---------\n");
        for(int i=0;i<3;i++){
            printf("|");
            for(int j=0;j<3;j++){
                printf("%c ",board[i][j]);
                printf("|");
            }
            printf("\n");
            printf("---------\n");

        }
        if((board[0][0]==player && board[0][1]==player && board[0][2]==player)||
           (board[1][0]==player && board[1][1]==player && board[1][2]==player)||
           (board[2][0]==player && board[2][1]==player && board[2][2]==player)||
           (board[0][0]==player && board[1][0]==player && board[2][0]==player)||
           (board[0][1]==player && board[1][1]==player && board[2][1]==player)||
           (board[0][2]==player && board[1][2]==player && board[2][2]==player)||
           (board[0][0]==player && board[1][1]==player && board[2][2]==player)||
           (board[0][2]==player && board[1][1]==player && board[2][0]==player)){
            printf("Player %c wins!\n", player);
            break;
        }
    }
    return 0;
}




