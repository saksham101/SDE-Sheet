# 04 Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

## Method 1
<h3> matching and swaping </h3>

``` cpp
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int start = 0, mid = 0, end = n-1;
        while(mid <= end) {
            if(arr[mid] == 0) {

                swap(arr[start], arr[mid]);
                mid++;
                start ++;
            }
            else if(arr[mid] == 1) {
                mid++;
            }
            else {
                swap(arr[mid], arr[end]);
                end--;
            }
        }
    }
};

int main() {

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }
        cout << endl;      
    }
    return 0;
}
```
complexity O(n)
