#include <iostream>

using namespace std;

// Declare Number of Queens
#define N 8 // 8 for eight queen puzzle, but it can be done with any number (besides 2 and 3)

// Couldn't do it in a makefile so I just put it all in one solution, sorry

// Creates the chess board based off of the number of queens put in
// by generating a 2D array
void printBoard(int board[N][N]) {
   for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
         cout << board[i][j] << " ";
         cout << endl;
   }
}

// Checks to see if there are any valid placements for the queen on the current row or column
// Don't need to check right since the array is generating left to right, only need to check
// the left since it only needs to see the valid placement based off the already positioned queens
bool checkForValidChoice(int board[N][N], int row, int col) {
   for (int i = 0; i < col; i++) // checks for left 
   {
       if (board[row][i])
       {
           return false;
       }  
   }
   for (int i=row, j=col; i>=0 && j>=0; i--, j--) // left upper diagonal
   {
      if (board[i][j])
      {
           return false;
      }
        
   }
   for (int i=row, j=col; j>=0 && i<N; i++, j--) // left lower diagonal
   {
      if (board[i][j])
      {
          return false;
      } 
   }
   return true;
}
// Places the queen at the point if the choice was valid
bool placeQueens(int board[N][N], int col) {
   if (col >= N) // Checks when all of the queens were placed correctly
   {
       return true;
   }  
   for (int i = 0; i < N; i++) // If they are all not placed yet then it iterates through here
   {
      if (checkForValidChoice(board, i, col) )
       {
         board[i][col] = 1; // If the location is a valid choice, places the queen here
         if ( placeQueens(board, col + 1)) // Goes to the other column to check the placement
         {
             return true;
         }
         board[i][col] = 0; // If invalid removes the queen
      }
   }
   return false; // If no valid order is found
}
bool checkAnswer() {
   int board[N][N];
   for(int i = 0; i<N; i++)
   for(int j = 0; j<N; j++)
   board[i][j] = 0; //board elements set to 0
   // Starting at 0,0, checks to see if queen placement is possible
   if (placeQueens(board, 0) == false)
   {
        cout << "Solution does not exist";
        return false;
   }
   printBoard(board); //Prints the board if a solution is found
   return true;
}
int main() 
{
   checkAnswer();
}