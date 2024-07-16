#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int arr[5] = {4,6,90,45,9};
    joy(arr, 5);
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void joy(int arr[], int n){
    int flag;
    for(int ph=0; ph<n-1; ph++){
        flag = 0;
        for(int i = 0; i<n-1-ph; i++){
            if(arr[i]>arr[i+1])
            {
                swap(&arr[i], &arr[i+1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}
