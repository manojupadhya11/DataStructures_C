//Program for searching item in an array using Binary Search
#include<stdio.h>
int BinarySearch(int arr[], int left, int right, int item){
    if(right>=left){
        int mid = (left+right)/2;
        if(arr[mid] == item){
            return mid;
        }
        else if(arr[mid]>item){
            return BinarySearch(arr, left, mid-1, item);
        }else{
            return BinarySearch(arr, mid+1, right, item);
        }
    }
    else
        return -1;
    
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int item = 2;
    int position = BinarySearch(arr,0,n-1, item);
    if(position == -1){
        printf("%d is Not Found",item);
    }else{
        printf("%d is Found at %d position",item, position);
    }
}
