#include <iostream>
using namespace std;

void pattern5(int n){
    for(int i = 0; i <=n; i++){
        for(int j = 0; j <n-i+1; j++){
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