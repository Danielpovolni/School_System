#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    cin >> n;
    ofstream myfile;
    myfile.open("newfile.txt");
    myfile << n;
    myfile.close();

    ifstream myfile2;
    myfile2.open("newfile.txt");

    if(!myfile2.is_open()){
        exit(EXIT_FAILURE);
    }

    char word[50];
    myfile2 >> word;
    while(myfile2.good()){
        cout << word << " ";
        myfile2 >> word;
    }
}
