#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ofstream out{"practice7.txt"};
    out<<"Hello, world"<<std::endl;
    out.seekp(7, std::ios::beg);
    out<<"file seek"<<std::endl;
    out.close();

    std::ifstream inf{"practice7.txt"};
    std::string line;
    if(inf.is_open()){
        while(!inf.eof()){
            std::getline(inf, line);
            std::cout<<line<<std::endl;
        }
    }


}