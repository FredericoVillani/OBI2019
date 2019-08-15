#include <iostream>

using namespace std;

int main (){
int M, A, B, C;
cin >> M >> A >> B;
C = M - A - B;
if(M< 39 || M > 110){
    return 0;
}
else if (A == B){
    return 0;
}
else if(A < 0 || A > M){
    return 0;
}
else if(B < 0 || B > M){
    return 0;
}
else{
      /* if(C>A and C> B){
        cout << C;
    }
    else if (C > A and C < B){
        cout << B;
    }
    else {
        cout << A;
    }
}
*/
  //  cout << "A idade do filho C é: " << C << endl;
    cout << max(max(A,B), C);
}
}
