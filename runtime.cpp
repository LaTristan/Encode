#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

void Encoding(string filepath){
    ifstream ifs(filepath,ios::in);
    if(ifs.fail()){
        cout<<"cannot open file(s) named "<<filepath<<endl;
        return;
    }
    ifs.close();
}

int main(int argc,char* argv[]){
    cout<<"Encoding..."<<endl;
    while(argc>1){
        cout<<*++argv<<endl;
        Encoding(*argv);
        --argc;
    }
    cout<<"Complete."<<endl;
    return 0;
}