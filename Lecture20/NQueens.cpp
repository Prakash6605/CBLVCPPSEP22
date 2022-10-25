// NQueens.cpp
#include<bits/stdc++.h>
using namespace std;

bool cellIsSafe(string board[] , int r , int c , int i , int j){

	// top
	int row = i , col = j ;

	while( row >= 0 ){
		if(board[row][col] == 'Q'){
			return false;
		}
		row--;
	}


	// top left

	row = i ;

	while ( row >= 0 && col >= 0 ){

		if(board[row][col] == 'Q'){
			return false;
		}

		row--;col--;

	}

	// top right

	row = i , col = j ;

	while( row >= 0 && j < c){

		if(board[row][col] == 'Q'){
			return false;
		}
		row--;col++;
	}

	return true;

}

bool nQueenProblem(string board[] , int r , int c , int i ){

	// base case
	if( i == r ){
		// print the board;
		for(int i = 0 ; i < r ; i++){
			for(int j = 0 ; j < c ; j++){
			cout << board[i][j] << " " ;
		}
		cout << endl;
		}

		cout << " =================== " << endl;
		// return true;
		return false;
	}


	for(int j = 0 ; j < c ; j++){
		if(cellIsSafe(board,r,c,i,j)){
			board[i][j] = 'Q';

			bool dhekhoRightPlacementHai = nQueenProblem(board,r,c,i+1);

			// in which case i needed to remove the Q placed 
			// j = 1 , 2 ,3 
			if( dhekhoRightPlacementHai == false ){
				board[i][j] = '.';
				// return false;
			}
			if(dhekhoRightPlacementHai == true){
				return true;
			}
		}
	}

	return false;

}


int main(){

	string board[] = {"....","....","....","....."};

	int row = 4 , col = 4 ;

	bool check = nQueenProblem(board,row,col,0);




	return 0;
}