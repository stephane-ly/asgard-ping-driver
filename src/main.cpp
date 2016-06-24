#include <fstream>
#include <sstream>
#include <iostream>

#include <string>
#include <vector>

#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

//TO DO
//Simultaneous pings
int main() {
    vector<string> online;
    std::string ip;
    for(int i=1; i<255; ++i){
        ip = "192.168.20." + to_string(i);
        if(!(system(("ping -w 1 " + ip).c_str()))){
            online.push_back(ip);
        }
    }
    for(int i=0; i<(int)online.size(); ++i){
        cout << online.at(i) << endl;
    }
    return 0;
}