#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int sum = 0;
    int x,y,out;
    ifstream Filea,Fileb,Fileo;
    Filea.open("fileinputa.txt");
    Fileb.open("fileinputb.txt");
    Fileo.open("output.txt");
    while (Filea >> x && Fileb >> y && Fileo >> out) {

        sum =y + x;
        cout << "Sum = " << sum << endl;
        if (out==sum)
        cout << "Correct" << endl ;
        else
        cout << "Wrong" << endl ;
    }
    Filea.close();
    Fileb.close();
    return 0;
}
