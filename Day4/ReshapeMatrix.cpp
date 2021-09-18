#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        cout << "******** " << r << "  " << c << "***************\n";
        if(r * c != mat.size() * mat[0].size()) return mat;
        vector<vector<int>> arr(r , vector<int>(c));
        int i = 0 , j = 0;
        for(auto it : mat){
            for(auto val : it){
                cout << i << " " << j << "\n";
                arr[i][j++] = val;
                if(j==c){
                    i++;
                    j = 0;
                }
            }
        }
        return arr;
    }
};

/*

566. Reshape the Matrix
Easy

1386

154

Add to List

Share
In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.

You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

 

Example 1:


Input: mat = [[1,2],[3,4]], r = 1, c = 4
Output: [[1,2,3,4]]
Example 2:


Input: mat = [[1,2],[3,4]], r = 2, c = 4
Output: [[1,2],[3,4]]
 

Constraints:

m == mat.length
n == mat[i].length
1 <= m, n <= 100
-1000 <= mat[i][j] <= 1000
1 <= r, c <= 300

*/