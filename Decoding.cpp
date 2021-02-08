#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;

void Decoding(string filename){
    ifstream ifs(filename,ios::in);
    if(ifs.fail()){
        cout<<"Cannot open file(s) named "<<filename<<endl;
        return;
    }
    ifs.close();
}

int main(int args,char* argv[]){
    cout<<"Decoding..."<<endl;
    while(args>1){
        string s=*++argv;
        args--;
        Decoding(s);
    }
    cout<<"Complete."<<endl;
}