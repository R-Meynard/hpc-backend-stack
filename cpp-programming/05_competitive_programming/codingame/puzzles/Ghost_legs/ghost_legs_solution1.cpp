#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    //int W;
    //int H;
   //cin >> W >> H; cin.ignore();
    /*vector<string> line;
    line.reserve(H);
    for (int i = 0; i < H; i++) {
        string l;
        getline(cin, l);
        line[i] = l;
        cerr << line[i]<< endl;
    }*/

    int W = 7, H = 7;
    std::vector<std::string> line;
    line.reserve(H);
    line = { "7"," ","7","A"," ", " ", "B", " ", " ", "C", "|", " ", " ", "|"," ", " ", "|",
        "|", "-","-","|"," "," ", "|",
        "|", " "," ","|","-","-", "|",
        "|", " "," ","|","-","-", "|",
        "|", " ", " ", "|"," ", " ", "|",
        "1", " ", " ", "2", " ", " ", "3"
    };

    std::cout << " Size of line : " << line.size() << std::endl;
    std::string start;
    start = line[0].at(0);
    std::cout << "start : " << start << std::endl;
    
    /*string start;
    string end;
    int currentpos;
    int i = 0;
    while(i<W){
        int id = 0;
        start = line[0].at(i);
        currentpos = i;
        for(int j = 1; j < (H-1); j++)
        {
            if(currentpos<W-1){
                if(line[j].at(currentpos+1)=='-'){
                    currentpos = currentpos + 3;
                    continue;
                }
            }
            if(currentpos>0){
                if(line[j].at(currentpos-1)=='-'){
                    currentpos = currentpos - 3;
                    continue;
                }
            }
        }
        end = line[H-1].at(currentpos); 
        
        cout << start << end << endl;
        
        id++;
        i = i + 3;

    }*/

}