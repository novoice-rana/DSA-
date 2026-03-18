#include<iostream>
using namespace std;
void sortZeroOne(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            
             }
        }
    }

}
int main(){
    int arr[]={0,1,0,1,1,0,0,0,0};
    int n=9;
    sortZeroOne(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}