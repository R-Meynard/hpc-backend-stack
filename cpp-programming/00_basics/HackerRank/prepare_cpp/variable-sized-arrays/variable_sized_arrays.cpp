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

    std::vector<int> temporary_a;
    int ki;
    for(int i = 0; i < n; i++){
        std::cout << "Fill the containing of a[" << i << "] and type -1 to stop: "<< std::endl;
        temporary_a.clear();
        int k = 0;
        ki = 0;
        while(true){
            std::cout << "index k = " << ki << " of a[" << i << "]: ";
            std::cin >> k;
            if(k == - 1){
                break;
            }
            temporary_a.push_back(k);
            ki++;
        }
        a[i] = temporary_a; 
        k=0;
    }

    // Display the contain of the a array
    for(auto it = a.begin(); it != a.end(); ++it){
        std::cout << it->size() << " ";
        for(auto jt = it->begin(); jt != it->end(); ++jt){
            std::cout << *jt << " ";
        }
        std::cout << "\n";
    }

    // Give the query you want to do
    // i : the first element is the index of the a array
    // j : the second element is the index of the element located in the a[i] array
    int ai=0;
    int ak=0;
    std::vector<std::pair<int, int>> query_array;
    for(int i = 0 ; i < q ; i++){
        std::cout <<"index of a: ";
        std::cin >> ai;
        std::cout << "element of a[" << ai << "] to print: ";
        std::cin >> ak;
        query_array.push_back(std::make_pair(ai,ak));

    }

    for(auto it = query_array.begin(); it != query_array.end(); ++it){
        auto jt = a[it->first];
        int element = jt[it->second];
        std::cout << element << std::endl;
    }
    return 0;
}