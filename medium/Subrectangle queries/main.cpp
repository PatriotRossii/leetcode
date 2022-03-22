class SubrectangleQueries {
    vector<vector<int>> matrix;
public:
    SubrectangleQueries(vector<vector<int>>& rectangle): matrix(rectangle) { }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for(; row1 <= row2; ++row1) {
            for(int col = col1; col <= col2; ++col) {
                matrix[row1][col] = newValue;
            }
        }
    }

    int getValue(int row, int col) {
        return matrix[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */