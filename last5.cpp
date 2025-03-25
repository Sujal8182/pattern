
#include <iostream>
using namespace std;
int main() {
    for(int row = 5; row > 0; row--){
        for(int sp = 0; sp <= row+1; sp++){
            cout << " ";
        }
        for(int i = row; i <= 5; i++){
            cout << i;
        }
        cout << endl;
    }    
}