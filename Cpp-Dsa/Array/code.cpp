#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter length of array : ";
    cin >> n;
    // int marks[5] = {7,5,2,1,3};
    int arr[n];
    // int size = sizeof(marks) / sizeof(int);

    for(int i = 0; i < n; i++) {
        cout << "Enter number : " << " " ;
        cin >> arr[i];
    }

    for(int idx = 0; idx < n; idx++){
          cout << arr[idx] << " "; //idx = 0,1,2,3,4,5
    }
   
    return 0;
}
