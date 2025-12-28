#include <iostream>
#include <vector>

void initializeMatrix(int nRows, int nColumns, std::vector<int>& mVector, std::vector<std::vector<int>>& mMatrix){
    // Initialise mMatrix
    int counterColumns = 1;
    std::vector<int> temporaryVector;
    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nColumns; j++){
            temporaryVector.push_back(counterColumns);
        }
        counterColumns++;
        mMatrix.push_back(temporaryVector);
        temporaryVector.clear();
    }

    // Initialise mVector
    int counterRows = 1;
    for(int i = 0; i < nRows; i++){
        mVector.push_back(counterRows);
        counterRows++;
    }
}

void printVector(int nRows, std::vector<int>& mVector){
    std::cout << "The content of this vector is, mVector : ";
    for(int i = 0; i < nRows; i++){
        std::cout << mVector[i] << " ";
    }
    std::cout << "" << std::endl;
}

void printMatrix(int nRows, int nColumns, std::vector<std::vector<int>>& mMatrix){
    std::cout << "The content of this matrix is : "<< std::endl;
    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nColumns; j++){
            std::cout << mMatrix[i][j] << " ";
        } 
        std::cout<< std::endl;
    }
}

void productMatrixVector(int nRows, int nColumns, std::vector<int>& mVector, std::vector<std::vector<int>>& mMatrix){

    initializeMatrix(nRows, nColumns, mVector, mMatrix);
    printVector(nRows, mVector);
    printMatrix(nRows, nColumns, mMatrix);

}

std::vector<int>  sequentialSolutionProductMatrixVector(int nRows, int nColumns, std::vector<int>& mVector, std::vector<std::vector<int>>& mMatrix){
    initializeMatrix(nRows, nColumns, mVector, mMatrix);
    std::vector<int> tmpVector;
    std::vector<int> vectorMatrix;
    int tmpValue = 0;
    for(int i = 0; i < nRows; i++){
        tmpVector = mMatrix[i];
        for(int jj = 0; jj < nColumns; jj++){
            tmpValue += tmpVector[jj]*mVector[jj];
        }
        vectorMatrix.push_back(tmpValue);
        tmpValue = 0;
        tmpVector.clear();
    }

    return vectorMatrix;
}

int main(int argc, char *argv[]){
    int nRows = 4;
    int nColumns = 4;
    std::vector<int> mVector;
    std::vector<std::vector<int>> mMatrix;
    //productMatrixVector(nRows, nColumns, mVector, mMatrix);
    std::vector<int> finalVector = sequentialSolutionProductMatrixVector(nRows, nColumns, mVector, mMatrix);
    printVector(nRows, finalVector);
    return 0;
}