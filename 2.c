/* 2. Write a C Program to swap for array rotation
Write a program to rotate (arr[], d, n) that rotates arr[] of size n by d elements.
(Example d=2 , Shifting each elements by 2 location) Rotation of the above array by 2 will make array*/

#include <stdio.h>

int main(){
    printf("Done by: Jayacharan R\nReg No: 23BDS0065\nSlot: L27+L28\n");
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }

    int d;
    printf("Enter the d value:");
    scanf("%d",&d);

    int NewArray[size];
    for(int i=d,j=0;i<size,j<size-d;i++,j++){
        NewArray[j]=array[i];
    } 
    for(int i=0,j=size-d;i<d,j<size;i++,j++){
        NewArray[j]=array[i];
    }

    printf("New list:");
    for(int i=0;i<size;i++){
        printf("%d ",NewArray[i]);
    }
    return 0;
}