#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string line, word;
    map<string,int> wordCount;

    cout<<"Enter string: ";
    getline(cin,line);
    stringstream ss(line);

    while(ss>>word) {
        wordCount[word]++;
    }

    cout<<"Word count: "<<endl;
    for(auto &it: wordCount){
        cout<<it.first<<": "<<it.second<<endl;
    }
    cout<<"Krrish Bhardwaj - 24CE010"<<endl;
    return 0;
}