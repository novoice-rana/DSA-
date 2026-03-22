#include <iostream>
#include<vector>
using namespace std;
// void func(int a[],int n){
//     cout<<"array elements are:"<<endl; 
// for(int i=0;i<n;i++){
//     cout<<a[i]<<endl;
// }
// }


// print
// void print(vector<int>v){
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         // cout<<v[i]<<" ";
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;

// }
void print2(vector<int>v){
    
    for(auto it:v){
        cout<<it<<" ";
        
    }
    cout<<endl;
}
int main()
{
    // vector initialisation
    vector<int>arr;
    vector<int>arr2(5,0);
    print2(arr2);
    // how to copy a vexctor
    vector<int>arr3(arr2);
    print2(arr3);

    // //in vector ,dont tell size just keep inserting
    // vector<int>v;
    // //insert
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(30);
    // print(v);
    // v.pop_back();

    // // clear vector
    // v.clear();
    // print(v);







    //static memory alloc of memory
    //int arr[5]={1,2,3,4,5}
    //dynamic alloc
    // int n;
    // cin>>n;
    // int *arr=new int[n];// each elelment would be zero or garbage value
    // for(int i=0;i<n;i++){
    //     int data;
    //     cin>>data;
    //     arr[i]=data;
    // }

    //let me insert more items
    // for(int i=0;i<10;i++){
    //     arr[n+i]=80;
    // }
    // func(arr,n);
}