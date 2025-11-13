#include <iostream>

int countZeroes(int arr[], int n){
    int numberZeros = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) numberZeros++;
    }
    return numberZeros;
}
int main (int argc, char *argv[]){
    return 0;
}