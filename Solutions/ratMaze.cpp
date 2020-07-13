 #include <iostream>
 #define Nigger 5
 using namespace std;
/*
 * 
 * Aman Upadhyay
 * Amity University Kolkata
 *  
*/
 int boka[Nigger][Nigger] = {
     {1,0,0,0,0},
     {1,1,0,1,0},
     {0,1,1,1,0},
     {0,0,0,1,0},
     {1,1,1,1,1},
 };

 int solv[Nigger][Nigger];
 void path(){
     for (int i = 0; i < Nigger; i++)
     {
         for (int j = 0; j < Nigger; j++)
         
            cout << solv[i][j]<< " ";
            cout << endl;         
     }
 }

 bool isValidPlace(int x, int y){
     //check inside maze
     if (x >= 0 && x < Nigger && y >= 0 && y < Nigger && boka[x][y] == 1)
     
         return true;
     return false;   
     
 }

 bool solveRatMaze(int x, int y)
 {
     if ( x == Nigger-1 && y == Nigger-1 )
     {
         solv[x][y] = 1;
         return true;
     }
     if (isValidPlace(x, y) == true){
     solv[x][y] = 1;

     if (solveRatMaze(x+1, y) == true)
     {
         return true;
     }
     if (solveRatMaze(x, y+1) == true)
     {
         return true;
     }
     solv[x][y] = 0;
     return false;
     }  
   return false;
 }
 
bool findSolution(){
    if (solveRatMaze(0, 0) == false)
    {
        cout << "There is No path Nigger!";
        return false;
    }
    path();
    return true;
}

int main(){
    findSolution();
}
