
#include <iostream> 
#include <cstring> //strcmp function

using namespace std; 

void displayBoard(char b[3][3]);
bool  checkwin(char board[3][3],char player);

int main()
{
    char ans[5];
    cout<<"welcome to tic tac toe :)\n";
    //used to ask whether the user wants to play the game again or not
    do 
    {
        char board[3][3]={
                  {' ',' ',' '},
                  {' ',' ',' '},
                  {' ',' ',' '}
                            };
        char player='X';
        int i,j,turn;
        for(turn=0;turn <9;turn++)
        {
          while(true)
           {
              displayBoard(board);
              cout<<"player "<<player<<" enter the row(0-2) and column(0-2) value where you want to place ex(0 1):";
              cin>>i>>j;
               if(board[i][j]=' ' && i<3 && i>=0 && j>=0 && j<3)
               {
                  break;
               }
               else
               {
                  cout<<"error!! enter valid values only...\n";
               }
           }
          board[i][j] = player;
          if(turn >= 4)
          {
               if(checkwin(board,player))
               {
                  displayBoard(board);
                  cout<<"\ncongratulations!!! player "<<player<<" won :)\n";
                  break;
               }
          }
        player = (player == 'X') ?'O':'X';
        }
        if(turn == 9 && !checkwin(board,player))
        {
        displayBoard(board);
        cout<<"\nIts a draw match\n";
        }
     cout<<"\nDo you want to play again(yes/no): ";
     cin>>ans;
    } while(strcmp(ans, "yes") == 0);//do not use yes in single quotes

cout<<"\nThank you for playing tic tac toe :)\n";
return 0;

}

//function to display the board
void displayBoard(char board[3][3])
{
    cout<<" -------------\n";
    for(int i=0;i<3;i++)
    {
        cout<<" | ";
        for(int j=0;j<3;j++)
        {
            cout<<board[i][j]<<" | ";
        }
        cout<<"\n -------------\n";
    }
}

//function to check for a win
bool  checkwin(char board[3][3],char player)
{
    for(int i=0;i<3;i++)
    {
        if(board[i][0]==player && board[i][1]==player && board[i][2]==player)//rows
        {
            return true;
        }
        else if(board[0][i]==player && board[1][i]==player && board[2][i]==player)//columns
        {
            return true;
        }
    }
    if(board[0][0]==player && board[1][1]==player && board[2][2]==player)//diagnols
    {
        return true;
    }
    else if(board[0][2]==player && board[1][1]==player && board[2][0]==player)
    {
        return true;
    }
    return false;
}
