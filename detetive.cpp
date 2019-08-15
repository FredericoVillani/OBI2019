#include <iostream>

using namespace std;

int main(){
    int E, I, V, A, B, i;
    cin >> E >> I >> V;

    if(1> E || E > 10000){
        return 0;
    }
    if(1> I || I > 1000000){
        return 0;
    }
    for(i = 0; I> i; i++){
        cin >> A >> B;
        if(1 > A || A > E || 1> B || B> E || 1> V || V > E){
            return 0;
        }
    }
    return 0;
}
