#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main(){
    double sum, sum2, mean, sd, nub;
    string x;
    ifstream source("score.txt");
    
    while (getline(source,x)){
        
        sum += atof(x.c_str());
        
        sum2 += pow(atof(x.c_str()),2);
        
        nub++;
    
    }
    
    mean = sum/nub;
    
    sd = sqrt((sum2/nub)-pow(mean,2));
    
    cout << "Number of data = " << nub << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd;
}