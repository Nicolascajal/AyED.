#include <iostream>
#include<cmath>

using namespace std;

int main(){

    float c = 0.0;
    int i = 0;
    
    while(abs(c*4 - M_PI) >= 0.000001){
        float termino = pow(-1, i) / ((2 * i) + 1);
        c += termino;
        i++;
    }

    cout.precision(7);

    cout << "Valor aproximado de pi: " << c*4 << endl;

    return 0;
}

