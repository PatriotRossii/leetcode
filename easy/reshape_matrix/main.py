class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        n = len(mat)
        m = len(mat[0])
        
        if r * c < n * m:
            return mat

        new_matrix = []
        for i in range(r):
            new_row = []
            for j in range(c):
                new_row.append(0)
            new_matrix.append(new_row)

        current_row = 0
        current_column = 0

        for row in mat:
            for value in row:
                new_matrix[current_row][current_column] = value
                current_column += 1
                if current_column == c:
                    current_column = 0
                    current_row += 1
                    
        if current_row == r and len(new_matrix[-1]) == c:
            return new_matrix
        return mat