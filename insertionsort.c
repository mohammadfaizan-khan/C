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

    for(int i=1;i<n;i++){
        int j=i-1;
        temp=arr[i];
        for(j;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }

    printf("\n");

    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}