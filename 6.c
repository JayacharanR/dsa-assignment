/*Q6. Write a C Program to implement Queue with the following operation :(Design a
Menu driven program)
i) Inserting and Element
ii) Deleting an Element
iii) Display the Element
iv) Exit*/


#include<stdio.h>
#include<stdlib.h>
int peak=0,n;

void push(int* ptr,int a){
    if(peak<n){
        ptr[peak]=a;
        peak+=1;
        printf("Element added \n");
    }
    else{
        printf("Over Flow \n");
    }
}

void pop(int* ptr){
    if(peak>0){
        for(int i=0;i<peak;i++){
            ptr[i]=ptr[i+1];
        }
        peak-=1;
        printf("Element poped \n");
    }
    else{
        printf("Under Flow \n");
    }
}

void display(int* ptr,int index){
    if(index<=peak){
        printf("The element at index %d is: %d \n",index,ptr[index]);
    }
    else{
        printf("enter valid index \n");
    }
}

int main(){
    printf("Done by: Jayacharan R\nReg No: 23BDS0065\nSlot: L27+L28\n");
    printf("Enter the max size of the Queue:");
    scanf("%d",&n);
    int* ptr=(int *)malloc(n*sizeof(int));
    int a=0;
    while (a==0)
    {
        printf("Enter 1 to push \n2 to pop \n3 to display \n4 to EXIT \n");
        int menu=0;
        scanf("%d",&menu);
        if(menu==1){
            printf("Enter a element to push:");
            int element;
            scanf("%d",&element);
            push(ptr,element);
        }
        else if(menu==2){
            pop(ptr);
        }
        else if(menu==3){
            printf("Enter a index to display:");
            int index;
            scanf("%d",&index);
            display(ptr,index);
        }
        else if(menu==4){
            a=1;
        }
    }
    free(ptr);
}