#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream input;
    input.open("input.txt", ios::in);
    if(!input.good()){
        return -1;
    }

    int fileSize=0;
    string a;
    while(!input.eof()){
        getline(input, a);
        fileSize++;
    }
    input.close();

    //=============================================================

    input.open("input.txt", ios::in);
    int tab[fileSize];

    for(int i=0; i<fileSize; i++){
        input >> tab[i];
    }
    input.close();

    //=============================================================

    for(int i=0; i<fileSize; i++){
        for(int j=i+1; j<fileSize ; j++){
            if((tab[i]+tab[j]) == 2020){
                cout << tab[i]*tab[j] << "\n";
            }
        }
    }

    //=============================================================

    for(int i=0; i<fileSize; i++){
        for(int j=i+1; j<fileSize ; j++){
            for(int k=j+1; k<fileSize; k++){
                if((tab[i]+tab[j]+tab[k]) == 2020){
                    cout << tab[i]*tab[j]*tab[k];
                }
            }
        }
    }

    return 0;
}
