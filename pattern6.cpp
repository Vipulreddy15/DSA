#include <iostream>
using namespace std;

void pattern6(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n-i+1; j++){
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