/*
Reverse an Array

Given an array A of size N, print the reverse of it.

Example:

Input:
1
4
1 2 3 4
Output:
4 3 2 1
Input:
First line contains an integer denoting the test cases 'T'. T testcases follow. Each testcase contains two lines of input. First line contains N the size of the array A. The second line contains the elements of the array.

Output:
For each testcase, in a new line, print the array in reverse order.

Constraints:
1 <= T <= 100
1 <= N <=100
0 <= Ai <= 100

*/

#include<iostream>
using namespace std;

void rev_arr(int* arr, int& n){
    for(int i=0, j=n-1; i<=j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
    
int main()
{
    int n;
    cin>>n;
    int*arr = new int[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    rev_arr(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}