#include <iostream>
using namespace std;

void simple_pattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout <<"Enter the number of rows and columns to be printed \n";
    cin >> n;
    simple_pattern(n);
    return 0;
}