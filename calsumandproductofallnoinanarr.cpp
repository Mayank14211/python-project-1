#include<iostream>
using namespace std;
void calSumandProduct(int arr[], int sz) {
    int sum = 0, product = 1;
    for(int i =0; i <sz; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum of all elements of an array = " << sum << endl;
    cout << "Product of all elements of an array = " <<  product << endl;

}
int main() {
    int arr[] = {6, 7, 3, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    calSumandProduct(arr, size);
    
    return 0;
}