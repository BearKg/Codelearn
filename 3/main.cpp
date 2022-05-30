#include <iostream>
using namespace std;

int maxNumber(int* arr, int n) {
    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
} 
int main() {
    int arr[100];
    int n;
    cout << "Nhap kich thuoc mang: " << endl;
    cin >> n;
    cout <<  "Nhap thong tin: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "So lon nhat: " << maxNumber(arr, n) << endl;
}