#include<stdio.h>
#include<stdlib.h>
int peak=0,n;

void pop(char* ptr);
void push(char* ptr,char a){
    if(peak<n){
        int c=(int)a;
        int PtrPeak=(int)ptr[peak-1];
        if(c==40 || c==91 || c==123){
            ptr[peak]=a;
            printf("Element added \n");
            peak+=1;
        }
        else if(c==41 && PtrPeak==40){
            pop(ptr);
        }
        else if(c==93 && PtrPeak==91){
            pop(ptr);
        }
        else if(c==125 && PtrPeak==123){
            pop(ptr);
        }
    }
    else{
        printf("The stack is full \n");
    }
}

void pop(char* ptr){
    if(peak>0){
        ptr[peak-1]=0;
        printf("Element poped \n");
        peak-=1;
    }
    else{
        printf("No element to pop \n");
    }
}

void display(char* ptr,int index){
    if(index<peak){
        printf("The element is %c \n",ptr[index]);
    }
    else{
        printf("Element not avaliable \n");
    }
}

int main(){
    printf("Done by: Jayacharan R\nReg No: 23BDS0065\nSlot: L27+L28\n");
    printf("Enter the max size of the stack:");
    scanf("%d",&n);
    char* ptr=(char *)malloc(n*sizeof(char));

    int a=0;
    while (a==0)
    {
        printf("Enter 1 to push \n2 to pop \n3 to display \n4 to EXIT \n");
        int menu=0;
        scanf("%d",&menu);
        
        if(menu==1){
            printf("Enter a element to push:");
            char element;
            scanf("%s",&element);
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