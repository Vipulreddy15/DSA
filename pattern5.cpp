#include <iostream>
using namespace std;

void pattern5(int n){
    for(int i = n; i >=1; i--){
        for(int j = i; j >=1; j--){
            cout << "* ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout <<"Enter the number of rows and columns to be printed \n";
    cin >> n;
    pattern5(n);
    return 0;
}