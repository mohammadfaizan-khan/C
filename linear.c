#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int arr[20],n,ele,counter=0,test;

    srand(time(NULL));

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
        printf("%d\n",arr[i]);       
    }
    printf("\n");
    printf("Enter the element to be searched : \n");
    scanf("%d",&ele);

    for(int i=0;i<n;i++){
        counter++;
        if(arr[i]==ele){
            test++;
            printf("Element : %d\n",arr[i]);
            printf("Index : %d\n",i);
            printf("\n");
            break;
        }
    }
    if(test==0){
        printf("Element not found");
    }
    printf("Number of iterations performed : %d\n",counter);


    return 0;
}
