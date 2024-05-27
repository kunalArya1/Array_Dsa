#include<iostream>
using namespace std;

int findUniqueNumber ( int arr[] ,int size){
    int ans = 0;

    for(int i =0; i< size;i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){
    int arr[5] = {2,3,2,4,4};
    int size = 5;

    int ans = findUniqueNumber(arr,size);

    cout << "Unique Number is : " << ans << endl;

    return 0;
}