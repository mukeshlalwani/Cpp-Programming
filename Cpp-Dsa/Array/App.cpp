#include <iostream>
using namespace std;

// void func(int arr[])
// {
//     arr[0] = 1000;
// }

// void func2(int *ptr) {
//     ptr[0] = 1000;
// }

void printArray(int nums[], int n) {
    // cout << sizeof(nums) << endl;
    // int n = sizeof(nums) / sizeof(int);

    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    // int a = 5;
    // int *ptr = &a;
    // cout << ptr << endl;

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    // func(arr); //passing array name is eq. to passing the pointer
    // cout << arr[0] << endl;

    printArray(arr, n);
    return 0;
}
 