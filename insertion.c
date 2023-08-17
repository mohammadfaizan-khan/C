#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));

    int arr[20],n,pos,element;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("Enter the index where element is to be inserted : ");
    scanf("%d",&pos);

    if(pos>n){
        printf("Element insertion not possible");
    }
    else{
        printf("Enter the element to be inserted : ");
        scanf("%d",&element);

        for(int i=n;i>=pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos]=element;
    
    for(int i=0;i<n+1;i++){
        printf("%d\t",arr[i]);
    }
    }
    printf("\n");
    
    return 0;
}