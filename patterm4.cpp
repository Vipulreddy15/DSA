#include <iostream>
using namespace std;

void pattern4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout <<"Enter the number of rows and columns to be printed \n";
    cin >> n;
    pattern4(n);
    return 0;
}