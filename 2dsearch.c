#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));

    int arr[20][20],m,n,l,ele,counter=0,temp=0;

    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&m,&n);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=(rand()%10)+(10*(i+1));
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    if(m>n){
        l=m;
    }
    else{
        l=n;
    }

    for(int k=0;k<l;k++){
        for(int i=0;i<m;i++){
            for(int j=i+1;j<n;j++){
                if(arr[k][i]>arr[k][j]){
                    temp=arr[k][i];
                    arr[k][i]=arr[k][j];
                    arr[k][j]=temp;
                }
            }
        }
    }

    printf("\n");
    printf("Sorted Array\n");
    printf("\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter the element to be searched : ");
    scanf("%d",&ele);

    for(int k=0;k<l;k++){
        int start = 0;
        int end = n-1;
        int mid = (start+end)/2;
        
        while(start<=end){
            if(arr[k][mid]>ele){
                end=mid-1;
            }
            else if(arr[k][mid]<ele){
                start=mid+1;
            }
            else{
                counter++;
                printf("Element : %d\n",arr[k][mid]);
                printf("Index : %d,%d\n",k,mid);
                break;
            }
            mid = (start+end)/2;
        }
    }    
if(counter==0){
    printf("Element not found !!!\n");
}
}