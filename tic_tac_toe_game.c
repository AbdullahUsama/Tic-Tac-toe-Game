#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
char grid[10] = {'1','2','3','4','5','6','7','8','9'};
//This function is called after every choice in main function and checks if either of the player won or not.
//If either of the player win it returns 'w',if game is drawn it returns 'd'.
char check_win(){
        if(grid[0]==grid[1]&&grid[1]==grid[2]){
            return 'w';
        }
        else if(grid[3]==grid[4]&&grid[4]==grid[5]){
            return 'w';
        }
        else if(grid[6]==grid[7]&&grid[7]==grid[8]){
            return 'w';
        }
        else if(grid[0]==grid[4]&&grid[4]==grid[8]){
            return 'w';
        }
        else if(grid[2]==grid[4]&&grid[4]==grid[6]){
            return 'w';
        }
        else if(grid[0]==grid[3]&&grid[3]==grid[6]){
            return 'w';
        }
        else if(grid[1]==grid[4]&&grid[4]==grid[7]){
            return 'w';
        }
        else if(grid[2]==grid[5]&&grid[5]==grid[8]){
            return 'w';
        }
        else if(grid[0]!='1'&&grid[1]!='2'&&grid[2]!='3'&&grid[3]!='4'&&grid[4]!='5'&&grid[5]!='6'&&grid[6]!='7'&&grid[7]!='8'&&grid[9]!='9'){
            return 'd';
        }
        else{
            return 'c';
        }
}
void Board()
{
    // system("cls");
    printf("    |   |\n");
    printf(" %c  | %c | %c\n",grid[0],grid[1],grid[2]);
    printf("____|___|___\n");
    printf("    |   |\n");
    printf(" %c  | %c | %c\n",grid[3],grid[4],grid[5]);
    printf("____|___|___\n");
    printf("    |   |\n");
    printf(" %c  | %c | %c\n",grid[6],grid[7],grid[8]);
}
int main()
{
    Board();
    int choice,count=2,player;
    char symbol,game_status;
    for(;;){
    player = (count%2==0)? 1 : 2;
    symbol = player==1? 'X' : 'O';
    printf("\n\n==>Player 1 - (X)    Player 2 - (O)\n");
    printf("\n\nPlayer no. %d enter a number : ",player);
    scanf("%d",&choice);
    if(choice==1&&grid[0]=='1'){
        grid[0] = symbol;
        count++;
    }
    else if(choice==2&&grid[1]=='2'){
        grid[1] = symbol;
        count++;
    }
    else if(choice==3&&grid[2]=='3'){
        grid[2] = symbol;
        count++;
    }
    else if(choice==4&&grid[3]=='4'){
        grid[3] = symbol;
        count++;
    }
    else if(choice==5&&grid[4]=='5'){
        grid[4] = symbol;
        count++;
    }
    else if(choice==6&&grid[5]=='6'){
        grid[5] = symbol;
        count++;
    }
    else if(choice==7&&grid[6]=='7'){
        grid[6] = symbol;
        count++;
    }
    else if(choice==8&&grid[7]=='8'){
        grid[7] = symbol;
        count++;
    }
    else if(choice==9&&grid[8]=='9'){
        grid[8] = symbol;
        count++;
    }
    Board();
    game_status = check_win();
    if(game_status=='w'){
        printf("==>Player %d won",player);
        break;
    }
    if(game_status=='d'){
        printf("Game is drawn");
        break;
    }
    }
}