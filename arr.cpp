#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numRows, numQue;
    cin >> numRows >> numQue;

    vector<vector<int>> numbers(numRows);

    for (int row = 0; row < numRows; row++) {
        int numCols;
        cin >> numCols;
        numbers[row].resize(numCols);
        for (int col = 0; col < numCols; col++) {
            cin >> numbers[row][col];
        }
    }

    for (int q = 0; q < numQue; q++) {
        int queryRow, queryCol;
        cin >> queryRow >> queryCol;
        cout << numbers[queryRow][queryCol] << endl;
    }

    return 0;
}
