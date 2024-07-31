#include<stdio.h>
#include<stdlib.h>
int peak=0,n=0,find;

void print(int* ptr){
    printf("Array: ");
    for(int i=0;i<peak;i++){
        printf("%d",ptr[i]);
    }
    printf("\n");
}

void insert(int* ptr,int a){
    if(peak<n & peak>=0){
        ptr[peak]=a;
        peak+=1;
        printf("Element added \n");
    }

}

void del(int* ptr,int index){
    if(index<peak & index>=0){
        if(index==peak-1){
            ptr[peak]=0;
            peak-=1;
        }
        else{
            for(int i=index;i<peak;i++){
                ptr[i]=ptr[i+1];
            }
            ptr[peak]=0;
            peak-=1;
        }
    }
    else{
        printf("index out of scope \n");
    }

}

void LinearSearch(int* ptr,int element){
    int Dd=0;
    for(int i=0;i<peak;i++){
        if(ptr[i]==element){
            printf("The Element %d found at %d (LINEAR SEARCH) \n",element,i);
            Dd=1;
            break;
        }
    }
    if(Dd==0){
        printf("The Element not present (LINEAR SEARCH) \n");
    }
   
}

int sort(int* l){
    int min=l[0];
    for(int i=0;i<peak;i++){
        for(int j=i;j<peak;j++){
            if(l[i]>l[j]){
                int temp=l[j];
                l[j]=l[i];
                l[i]=temp;
            }
        }
    }

}
int BinarySearch(int* ptr,int element){
    sort(ptr);
    int left = 0;
    int right = peak - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        
        if (ptr[mid] == element) {
            return mid;
            mid=find;
        }

        
        if (ptr[mid] < element) {
            left = mid + 1;
        }
        
        else {
            right = mid - 1;
        }
    }

    return -1;

}

void update(int* ptr,int k,int new){
    if(k<=peak & k>=0){
        ptr[k]=new;
    }

}

void display(int* ptr,int pos){
    if(pos-1<peak & pos-1>=0){
        printf("The previous element is: %d \n",ptr[pos-1]);
    }
    if(pos-1<0){
        printf("The previous element is out of scope \n");
    }
    if(pos+1<peak){
        printf("The next element is: %d \n",ptr[pos+1]);
    }
    if(pos+1>=peak){
        printf("The next element is out of scope \n");
    }

}

int main(){
    printf("Done by: Jayacharan R\nReg No: 23BDS0065\nSlot: L27+L28\n");
    printf("Enter 1 to push \n2 to pop \n3 to display \n4 to EXIT \n");
    printf("Enter the max size of the array:");
    scanf("%d",&n);
    int* ptr=(int *)malloc(n*sizeof(int));

    //inserting element
    int count=0;
    int a;
    while(count!=n)
    {printf("Enter element to be entered:");
    scanf("%d",&a);
    insert(ptr,a);
    count++;
    }
    print(ptr);

    //deleting element 
    printf("Enter index to del:");
    int index;
    scanf("%d",&index);
    del(ptr,index);
    print(ptr);

    //updating
    printf("Enter the index position to update:");
    int k,new;
    scanf("%d",&k);
    printf("Enter the new element:");
    scanf("%d",&new);
    update(ptr,k,new);
    print(ptr);

    //display
    printf("Enter the value of k(index):");
    int pos;
    scanf("%d",&pos);
    display(ptr,pos);

    //searching
    int element;
    printf("Enter the element to be searched:");
    scanf("%d",&element);
    //linear search
    LinearSearch(ptr,element);
    //binary search
    int compare = BinarySearch(ptr,element);
    if ( compare!= -1){
        printf("The Element %d found at %d (BINARY SEARCH)",element,compare);
    }
    else{
        printf("The Element %d not present (BINARY SEARCH)",element);
    }
    free(ptr);
    return 0;
}
