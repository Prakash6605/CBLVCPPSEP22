// RatAndMaze.cpp

#include<bits/stdc++.h>
using namespace std;

bool isValidCell(int i , int j , int n , int m , int maze[][4]){

	return (i < n && j < m && maze[i][j] != 1);
	
}

bool ratAndMaze(int maze[][4] , int n , int m , int i , int j){

	// base case
	if( i == n - 1 && j == m - 1){
		maze[i][j] = 2 ;
		return true;
	}

	// mere hisse ka kam tha
	if(!isValidCell(i,j,n,m,maze)){
		return false;
	}


	// worker's work
	maze[i][j] = 2 ;

	bool rightOption = ratAndMaze(maze,n,m,i,j+1);

	if(rightOption){
		return true;
	}

	bool downOption = ratAndMaze(maze,n,m,i+1,j);

	if(downOption){
		return true;
	}

	maze[i][j] = 0 ;
	
	return false;		

}

int main(){

	int maze[][4] = { {0 , 0 , 0 ,0},
					  {0 , 1, 1 , 1},
					  {0 , 0 , 0 ,1},
					  {0 , 0 , 0 , 0}
					};

	int n = 4 , m = 4 ;


	bool isItPossible = ratAndMaze(maze,n,m,0,0);				

	if(isItPossible == true){
		cout << "Possible " << endl;
	}else{
		cout <<" Not Possible " << endl;
	}

	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m; j++){
			cout << maze[i][j]<< " ";
		}
		cout<< endl;
	}


	return 0;
}
