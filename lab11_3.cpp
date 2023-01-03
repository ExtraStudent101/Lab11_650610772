#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int N = 0;
    float sum = 0,X=0,Z;
    string textline;
    ifstream score ("score.txt");
     while(getline(score,textline))
     {
        Z = atof(textline.c_str()) ;
        sum += atof(textline.c_str());
        N++;
        X +=  pow(Z,2);
     }

    cout << "Number of data = " << N << "\n";
    cout << setprecision(3);
    float mean = sum/N ;
    cout << "Mean = " << mean << "\n" ;
    cout << "Standard deviation = " << sqrt(X/N-pow(mean,2));
}