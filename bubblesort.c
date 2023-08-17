#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int arr[20],n,temp,comp=0,swap=0,pass=0;

    srand(time(NULL));

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
        printf("%d\n",arr[i]);       
    }

    for(int i=0;i<n;i++){
        pass++;
        for(int j=i+1;j<n;j++){
            comp++;
            if(arr[i]>arr[j]){
                swap++;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("Number of comparisons : %d\n",comp);
    printf("Number of swaps : %d\n",swap);
    printf("Number of passes : %d\n",pass);
    printf("Sorted\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}