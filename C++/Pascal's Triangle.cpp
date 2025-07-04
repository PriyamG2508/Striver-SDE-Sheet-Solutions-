class Solution {
public:
    // nCr = (n-r)!/r!
    vector<int> generateRows(int numRows) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col = 1; col < numRows; col++){
            ans = ans * (numRows - col);
            ans = ans / col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        for(int i = 1; i <= numRows; i++){  
            pascalTriangle.push_back(generateRows(i));
        }
        return pascalTriangle;
    }
};
