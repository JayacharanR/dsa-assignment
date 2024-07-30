//Q3. Write a C Program to Print All the Repeated Numbers with Frequency in an Array

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

    int max=array[0];
    int feq[size];
    for(int i=0;i<size;i++){
        feq[i]=0;
        if (array[i]>max){
            max=array[i];
        }
    }

    for(int i=0;i<size;i++){
        feq[array[i]]++;
    }

    for(int i=0;i<=max;i++){
        if (feq[i]>0){
            printf("The No %d appears %d times \n",i,feq[i]);
        }
    }
}