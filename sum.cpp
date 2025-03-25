
#include <iostream>
using namespace std;
int main() {
    int sum = 10;
    for(int i = 0; i <= 5; i++){
        for(int j = 1 ; j <=i;j++){
            sum++;
            cout << sum << " ";
        }
        cout << endl;
    }
}