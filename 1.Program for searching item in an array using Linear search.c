//Program for searching item in an array using Linear search
#include<stdio.h>

void linearSearch(int arr[], int len, int item){
    for(int i = 0; i<=len; i++){
        if(arr[i] == item){
            printf("%d is found at index %d", item, i);
            return;
        }
    }
    printf("%d is Not Found",item);
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    int item = 7;
    linearSearch(arr, len, item);
    
    return 0;
}
