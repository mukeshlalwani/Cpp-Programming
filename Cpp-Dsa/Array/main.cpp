#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int marks[50];
    // int marks [50] = {1,2,3,4,5,6,7};
    int marks[] = {1,2,3,4,5,6,7,3,6,8};
     cout << marks[0] << endl; //1
     cout << marks[1] << endl; //2
     cout << marks[2] << endl;
     cout << marks[3] << endl;
     cout << marks[4] << endl;
     cout << marks[5] << endl;

     cout << "Array Size :" << sizeof(marks) / sizeof(int) << endl;

     cout << marks[50] << endl; 
    return 0;
}
