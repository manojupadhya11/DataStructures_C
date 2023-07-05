//Program for Sorting an Array Using Bubble Sorting
#include<stdio.h>
void swap(int *var1, int *var2){
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}
void BubbleSort(int arr[], int n){
    int i,j;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    printf("\t");
    }
}    
int main(){
    int arr[] = {9,2,5,6,1,3,4,8,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("----------- Array Before Sorting----------\n");
    display(arr, size);
    BubbleSort(arr,size);
    printf("\n-----------Array After Sorting----------\n");
    display(arr, size);
    return 0;
    
}
