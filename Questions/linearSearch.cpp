#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    for(int i =0; i< size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[5] = {10,20,30,40,50};
    int size = 5;
    int targetElem = 90;
    

   cout <<  linearSearch(arr,size,targetElem) << endl;
    // for (int i = 0;i< size; i++){
    //     if(arr[i] == targetElem){
    //         cout << "Number found at " << i << endl;
    //         break;
    //     }
    // }
    // cout << "Number is not Present in array";
    
    
    return 0;
}