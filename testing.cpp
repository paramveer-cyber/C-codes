#include <iostream>
using namespace std;

int main()
{
    int row, column;
    int i = 1;
    int j = 1;
    cin >> row >> column;

    while(i <= row, j <= column){
        if (i == row, j == column, i == 1, j == 1){
            for (int i = 1; i <= row; i++){
                for (int j = 1; j <= column; j++) {
                    cout << "*";
                }
                cout << "\n";
            }
        }
        else {
            for (i <= row; i++;){
                for ( j <= column; j++;){
                    cout << "*  *";
                }
            cout << "\n";
            }
        }
    }
}