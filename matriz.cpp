#include <iostream>

using namespace std;

int main(){
    int L, C, i, j, e1, e2;
    e2 = 0;
    e1 = 0;
    cin >> L >> C;
    int a[L][C];

    if (2 > L || 2 > C || L > 1000 ||  C > 1000){
        return 0;
    }
    for(i = 0; i < L; ++i)
       for(j = 0; j < C; ++j)
       {
           cin >> a[i][j];
       }
    for(i = 0; i < L; ++i)
        for(j = 0; j < C; ++j)
            if(a[0][0] + a[i][j] <= a[0][j] + a[i][0] ){
            e1 = (i)*(j) + i + j + 1;
            e2 = max(e1, e2);}

    if (e2 != 0){
        cout << e2 << endl;}
    else{

    return 0;}
    return 0;
}
