// Method 1

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

// Method 2

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end) {
    int temp;
    if(start >= end)
      return;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverse(arr, start+1, end-1)
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10}, start = 0, end = 9;
    reverse(arr, start, end);
    for(int i = 0; i < 10; i ++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
