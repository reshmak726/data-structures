#include <stdio.h>
int linearSearch(int arr[], int size, int element){
    for(int i=0; i<size;i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int size, int element){
    int mid,high,low;
    low =0;
    high = size-1;
    while (low<=high){
  
    mid = (low+high)/2;
    if(arr[mid]==element){
        return mid;
    }
    if(arr[mid]<element){
        low = mid+1;

    }
    else{
        high = mid-1;
    }

}
return -1;
}

int main(){
    // unsorted array for linear search
    // int arr[] = {1,2,4,5,6,8,9,5,6,7,45};
    // int size = sizeof(arr)/sizeof(int);

    //    sorted array for binary search
    int arr[] = {1,2,4,5,6,8,9,10,16,27,45};
    int size = sizeof(arr)/sizeof(int);
    int element = 16;
    int searchIndex = binarySearch(arr,size,element);
    printf("the element %d was found at index %d\n", element, searchIndex);
    return 0;
}