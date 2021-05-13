#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10}, start = 0, end = 9, temp;
    
    while(end > start) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --;
    }

    for(int i = 0; i < 10; i ++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
