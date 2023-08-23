// rat should reach destination
// rat can only travel through path having 1

#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int i, int j, int row, int col, int arr[3][3], vector<vector<bool>>& visited) {
    if( (i>=0 && i<row) && (j>=0 && j<col) &&
        (arr[i][j] == 1) &&
        (visited[i][j] == false) ) {
            return true;
        }
    else 
        return false;
}

void solveMaze(int arr[3][3], int row, int col, int i, int j,
    vector<vector<bool>>& visited, vector<string>& path, string output) {
        // base case : we reach destination
        if( (i == row-1) && (j == col-1) ) {
            path.push_back(output);
            return;
        }

        // down 
        if(isSafe( i+1, j, row, col, arr, visited)) {
            visited[i+1][j] = true;
            solveMaze(arr, row, col, i+1, j, visited, path, output + 'D');
            visited[i+1][j] = false;
        }

        // left
        if(isSafe( i, j-1, row, col, arr, visited)) {
            visited[i][j-1] = true;
            solveMaze(arr, row, col, i, j-1, visited, path, output + 'L');
            visited[i][j-1] = false;
        }

        // right
        if(isSafe( i, j+1, row, col, arr, visited)) {
            visited[i][j+1] = true;
            solveMaze(arr, row, col, i, j+1, visited, path, output + 'R');
            visited[i][j+1] = false;
        }

        // up
        if(isSafe( i-1, j, row, col, arr, visited)) {
            visited[i-1][j] = true;
            solveMaze(arr, row, col, i-1, j, visited, path, output + 'U');
            visited[i-1][j] = false;
        }
    }

int main() {
    int maze[3][3] = {{1, 0, 0},
                      {1, 1, 0},
                      {1, 1, 1}};
    
    int row = 3;
    int col = 3;

    if(maze[0][0] == 0) {
        cout << "No path" << endl;
        return 0;
    }

    // another array to keep track of visited or not using true and false
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    // source value should be 1
    visited[0][0] == true;

    // to store all possible strings
    vector<string> path;
    string output = "";

    int i=0;   // source indexes
    int j=0;

    solveMaze(maze, row, col, i, j, visited, path, output);

    cout << "Results " << endl;
    for(auto i: path) {
        cout << i << " ";
    }

    if(path.size() == 0)
        cout << "No path exist";

}