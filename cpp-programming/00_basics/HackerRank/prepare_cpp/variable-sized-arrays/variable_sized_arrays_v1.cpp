#include <vector>
#include <iostream>

int main(){
    int n;
    int q;
    std::cout << "Give a value n for the lenght of the array containing references to other arrays" << std::endl;
    std::cout << "n: ";
    std::cin >> n;
    std::cout << "Give the number of queries" << std::endl;
    std::cout << "q: ";
    std::cin >> q;

    // Declare the a array that contains a reference to an array
    std::vector<std::vector <int>> a(n);

    for(int i = 0; i < n; i++){
        std::cout << "Fill the containing of a[" << i << "] (-1 to stop) : "<< std::endl;
        std::vector<int> temp;
        int k = 0;
        int ki = 0;

        while(true){
            std::cout << "index k = " << ki << " of a[" << i << "]: ";
            std::cin >> k;
            if(k == - 1) break;
            temp.push_back(k);
            ki++;
        }
        a[i] = temp; 
    }

    // Display the contain of the a array
    for (const auto& row : a){
        std::cout << row.size() << " ";
        for(int x : row) std::cout << x << " ";
        std::cout << "\n";
    }

    // Queries
    // i : the first element is the index of the a array
    // j : the second element is the index of the element located in the a[i] array
    std::vector<std::pair<int, int >> queries;
    for (int i = 0; i < q; i++){
        int ai, ak;
        std::cout << "index of a: ";
        std::cin >> ai;
        std::cout << "element of a[" << ai << "]: ";
        std::cin >> ak;
        queries.emplace_back(ai, ak);
    }

    //Output
    for (const auto& qr : queries) {
        std::cout << a[qr.first][qr.second] << "\n";
    }

    return 0;
}