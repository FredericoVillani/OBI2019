#include <iostream>
using namespace std;

int main(){
    int N, i;
    float P, G, pa, pb;

    cin >> N;
        if( 1 > N || N > 100){
            return 0;
        }
        for(i=0; N>i; i++){
        cin >> P >> G;
        if(0 > P || P > 1000.00){
            return 0;
        }
        if( 1 > G || G > 1000){
            return 0;
        }

        pa = (1000*P)/G;
        if (i=0){
        pb = pa;}
        else {
         pb = min(pa, pb);
        }
    }
    cout.precision(2) << pb << endl;
    return 0;
}
