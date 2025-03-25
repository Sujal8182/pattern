
#include <iostream>
using namespace std;
int main() {
    for(int row = 0; row <= 5; row++){
        for(int sp = 5; sp >= row+1; sp--){
            cout << " ";
        }
        for(int i = 1; i <= row; i++){
            cout << i;
        }
        for(int j = 2; j <=row; j++){
            cout << j;
        }
        cout << endl;
    }
}