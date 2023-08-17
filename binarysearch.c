#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int arr[20],n,temp=0,element,loop_counter=0;

    srand(time(NULL));

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
        printf("%d\n",arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    printf("Enter the element to be searched : ");
    scanf("%d",&element);
    
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;

    while(start<=end){
        loop_counter++;
        if(arr[mid]>element){
            end=mid-1;
        }
        else if(arr[mid]<element){
            start=mid+1;
        }
        else{
            printf("Element : %d\n",arr[mid]);
            printf("Index : %d\n",mid);
            break;
        }

        mid = (start+end)/2;
    }
    printf("\n");
    printf("Number of iterations performed : %d\n",loop_counter);
}