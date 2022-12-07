#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> matrix){
    int column = sizeof(matrix) / sizeof(int) - 2;
    int row = sizeof(matrix[0]) / sizeof(int) - 2;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << setw(10);
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void add_matrix (vector<vector<int>> first_matrix,vector<vector<int>> second_matrix,vector<vector<int>>& third_matrix,int split_index){
    for(int i = 0;i < split_index; i++){
        for(int j = 0;j < split_index; j++){
        third_matrix[i][j] = first_matrix[i][j] + second_matrix[i][j];
        }
    }
}
vector<vector<int>> multiply(vector<vector<int>> first_matrix,vector<vector<int>> second_matrix){
    int col1 = first_matrix[0].size();
    int col2 = second_matrix[0].size();
    int row1 = first_matrix.size();
    int row2 = second_matrix.size();
 
    if (col1 != row2) {
        cout << "Error column and row are not equal." << endl;
        return {};
    }
    vector<int> result_matrix_row (col2, 0);
    vector<vector<int>> result_matrix (row1, result_matrix_row);
    if (col1 == 1){
        result_matrix[0][0] = first_matrix[0][0] * second_matrix[0][0];
    }
    else{
        int split_index=col1/2;
        vector<int> row_vector(split_index, 0);
        vector<vector<int>> result_matrix_00(split_index,row_vector);
        vector<vector<int>> result_matrix_01(split_index,row_vector);
        vector<vector<int>> result_matrix_10(split_index,row_vector);
        vector<vector<int>> result_matrix_11(split_index,row_vector);

        vector<vector<int> > a00(split_index, row_vector);
        vector<vector<int> > a01(split_index, row_vector);
        vector<vector<int> > a10(split_index, row_vector);
        vector<vector<int> > a11(split_index, row_vector);
        vector<vector<int> > b00(split_index, row_vector);
        vector<vector<int> > b01(split_index, row_vector);
        vector<vector<int> > b10(split_index, row_vector);
        vector<vector<int> > b11(split_index, row_vector);
        for (auto i = 0; i < split_index; i++)
            for (auto j = 0; j < split_index; j++) {
                a00[i][j] = first_matrix[i][j];
                a01[i][j] = first_matrix[i][j + split_index];
                a10[i][j] = first_matrix[i + split_index][j];
                a11[i][j] = first_matrix[i + split_index][j + split_index];

                b00[i][j] = second_matrix[i][j];
                b01[i][j] = second_matrix[i][j + split_index];
                b10[i][j] = second_matrix[i + split_index][j];
                b11[i][j] = second_matrix[i + split_index][j + split_index];
                

            }
        add_matrix(multiply(a00,b00), multiply(a01,b10), result_matrix_00, split_index);
        add_matrix(multiply(a00,b01), multiply(a01,b11), result_matrix_01, split_index);    
        add_matrix(multiply(a10,b00), multiply(a11,b10), result_matrix_10, split_index);
        add_matrix(multiply(a10,b01), multiply(a11,b11), result_matrix_11, split_index);

        for (auto i = 0; i < split_index; i++)
            for (auto j = 0; j < split_index; j++) {
                result_matrix[i][j] = result_matrix_00[i][j];
                result_matrix[i][j + split_index] = result_matrix_01[i][j];
                result_matrix[i + split_index][j] = result_matrix_10[i][j];
                result_matrix[i + split_index][j + split_index] = result_matrix_11[i][j];
            }
        result_matrix_00.clear();
        result_matrix_01.clear();
        result_matrix_10.clear();
        result_matrix_11.clear();
        a00.clear();
        a01.clear();
        a10.clear();
        a11.clear();
        b00.clear();
        b01.clear();
        b10.clear();
        b11.clear();
    }
    return result_matrix;    

}
int main(){
     vector<vector<int>> first_matrix = { { 1, 3, 8, 1 },
                                      { 2, 9, 0, 2 },
                                      { 3, 6, 3, 3 },
                                      { 7, 7, 9, 2 } };
    cout << "Fisrt matrix : " << endl;
    print(first_matrix);
    
    vector<vector<int> > second_matrix = { { 9, 1, 7, 2 },
                                      { 3, 8, 2, 3 },
                                      { 6, 3, 4, 5 },
                                      { 5, 6, 9, 0 } };
    cout << "Second Matrix : " << endl;
    print(second_matrix);
    vector<vector<int> > result_matrix(multiply(first_matrix, second_matrix));
    cout << "The result : " << endl;
    print(result_matrix);
    return 0;   
}
