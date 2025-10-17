#include<iostream>
using namespace std;

int main() {
    int numRows = 0, numColumns = 0;
    cin >> numRows >> numColumns;

    if(numRows >= 21 || numColumns <= 1) {
        return 0;
    }

    int matrix[numRows][numColumns];

    for(int row = 0; row < numRows; row++) {
        for(int column = 0; column < numColumns; column++) {
            cin >> matrix[row][column];
        }
    }

    for(int diagonal = 0; diagonal <= numRows + numColumns - 2; diagonal++) {
        int diagonalSum = 0;

        for(int row = 0; row < numRows; row++) {
            int column = diagonal - row;

            if(column >= 0 && column < numColumns) {
                diagonalSum += matrix[row][column];
            }
        }
        cout << diagonalSum << " ";
    }

    cout << endl;

    return 0;
}