#include <iostream>
using namespace std;

void pattern6(int n){
    for(int i = n; i > 0; i--){
        for(int j = n; j >0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout <<"Enter the number of rows and columns to be printed \n";
    cin >> n;
    pattern6(n);
    return 0;
}