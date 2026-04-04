#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int target){

    int start = 0;
    int end = n - 1;
    int ans = -1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            ans = mid;        // store index
            end = mid - 1;    // move left
        }

        else if(target > arr[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }
    }

    return ans;
}

int main(){

    int arr[] = {10,20,30,30,30,30,40,50,60};
    int n = 9;
    int target = 30;

    int ansIndex = firstOccurence(arr, n, target);

    if(ansIndex == -1){
        cout << "Element not found" << endl;
    }
    else{
        cout << "First Occurrence at Index " << ansIndex << endl;
    }
}