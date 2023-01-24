//48 Rotated Array (leetcode)

//Method one (not acceptable as matrix is not rotated inplace)
#include <iostream>
#include <vector>
using namespace std;


void takingInput (vector< vector<int> > &matrix, int totalRows, int totalCols) {
    for (int i = 0; i<totalRows; i++) {
        vector<int> temp;
        for (int j = 0; j<totalCols; j++) {
            int x; cin>>x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }
}

void printingMatrix (vector< vector<int> > &matrix, int totalRows, int totalCols) {
    for (int i = 0; i<totalRows; i++) {
        for (int j = 0; j<totalCols; j++) {
            cout<<matrix[i][j]<<' ';
        }
        cout<<endl;
    }
}

void rotatedMatrix (vector< vector<int> > &matrix, int totalRows, int totalCols) {
    int start = 0;
    int end = matrix.size() - 1;

    while (start <= end) {
        for (int row = 0; row < totalRows; row++) {
            swap(matrix[row][start], matrix[row][end]);
        }
        start++;
        end--;
    }
    printingMatrix (matrix, totalRows, totalCols);
}

void transpose (vector< vector<int> > &matrix, int totalRows, int totalCols) {
    vector< vector<int> > tpose;

    for (int i = 0; i < totalRows; i++) {
        vector<int> temp;
        for (int j = 0; j < totalCols; j++) {
            temp.push_back(matrix[j][i]);
        }
        tpose.push_back(temp);
    }
    rotatedMatrix(tpose, totalRows, totalCols);
}


int main () {

    int totalRows = 0;
    int totalCols = 0;
    cout<<"Enter total no of rows and cols: ";
    cin>>totalRows>>totalCols;
    cout<<endl;

    vector < vector<int> > matrix;
    takingInput(matrix, totalRows, totalCols);
    
    cout<<endl;

    printingMatrix(matrix, totalRows, totalCols);
    cout<<endl;
    transpose(matrix, totalRows, totalCols);

    return 0;
}

//Method 2 (inplace rotation) (Accepted on leetcode);

void rotateMatrix (vector<vector<int>>& matrix, int totalRows, int totalCols) {
    int start = 0;
    int end = matrix.size()-1;

    while (start <= end) {
        for (int row = 0; row < totalRows; row++) {
            swap(matrix[row][start], matrix[row][end]);
        }
        start++;
        end--;
    }
}

void transpose(vector<vector<int>>& matrix, int totalRows, int totalCols) {
    for (int i = 0; i < totalRows; i++) {
        for (int j = i+1; j < totalCols; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    rotateMatrix(matrix, totalRows, totalCols);
}

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int totalRows = matrix.size();
        int totalCols = matrix[0].size();

        transpose(matrix, totalRows, totalCols);
    }
};