/*Q5. Write C program to implement Stack Using an array with the operation :
        i) Push 
        ii) Pop 
        iii) isEmpty() 
        iv) isFull()*/
#include<stdio.h>
#include<stdlib.h>
int peak=0,n;

void push(int* ptr,int a){
    if(peak<n){
        ptr[peak]=a;
        printf("Element added\n");
        peak+=1;
    }
    else{
        printf("The stack is full\n");
    }
}

void pop(int* ptr){
    if(peak>0){
        ptr[peak-1]=0;
        printf("Element poped\n");
        peak-=1;
    }
    else{
        printf("No element to pop\n");
    }
}

void IsFull(int* ptr){
    if(peak==n){
        printf("The stack is full\n");
    }
    else{
        printf("The stack is not Full\n");
    }
}

void IsEmpty(int* ptr){
    if(peak==0){
        printf("The stack is empty\n");
    }
    else{
        printf("The stack is not empty\n");
    }
}

int main(){
    printf("Done by: Jayacharan R\nReg No: 23BDS0065\nSlot: L27+L28\n");
    printf("Enter the max size of the stack:\n");
    scanf("%d",&n);
    int* ptr=(int *)malloc(n*sizeof(int));

    //push
    int count=0;
    int a;
    while (count!=n)
    {printf("Enter the element to add: \n");
    scanf("%d",&a);
    push(ptr,a);
    count++;
    }
    //pop
    pop(ptr);

    //IsFull
    IsFull(ptr);

    //IsEmpty
    IsEmpty(ptr);

    for (int i=0;i<peak;i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

}