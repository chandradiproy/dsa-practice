#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>> matrix){
    for(int i = 0 ; i<matrix.size() ; i++){
        for(int j = 0 ; j<matrix[0].size() ; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

// void setZeros(vector<vector<int>>& matrix){
//     int n = matrix.size(), m = matrix[0].size();
//     for(int i = 0 ; i<n ; i++){
//         for(int j = 0 ; j<m ; j++){
//             if(matrix[i][j] == 0 ){
//                 for(int k = 0 ; k<m ; k++){
//                     matrix[i][k] = -1;
//                 }
//                 for(int k = 0 ; k<n ; k++){
//                     matrix[k][j] = -1;
//                 }
//             }
//         }
//     }
//     for(int i = 0 ; i<n ; i++){
//         for(int j = 0 ; j<m ; j++){
//             if(matrix[i][j] == -1){
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }


void setZeros(vector<vector<int>>& matrix){
    int row = matrix.size(), col = matrix[0].size();
    int firstCell = matrix[0][0];
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;// marking the first row's ith cell as 0
                if(j!=0){
                    matrix[0][j] =0; //marking the first column's jth cell as 0
                }else{
                    firstCell = 0; //marking the first cell as 0
                }
            }
        }
    }
    for(int i  = 1 ; i<row ; i++){
        for(int j = 1 ; j<col ; j++){
            if(matrix[i][j] !=0){
                if(matrix[i][0] ==0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
    if(matrix[0][0] == 0){
        for(int j = 0 ;j<col ;j++){
            matrix[0][j] = 0;
        }
    }
    if(firstCell == 0){
        for(int i = 0 ; i<row ; i++){
            matrix[i][0] = 0;
        }
    }
}

int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,0},{0,1,0}};
    cout<<"Original Matrix: "<<endl;
    display(matrix);
    setZeros(matrix);
    cout<<"Modified Matrix: "<<endl;
    display(matrix);

}