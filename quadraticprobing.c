#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insert();
void delete();
void search();
void print();

int ht[50],key=0,found=0,cdelete=0;

int main(){
    srand(time(NULL));
    int ch=0,n;
    
    for(int i=0;i<50;i++){
        ht[i]=-1;
    }

    for(int i=0;i<40;i++){
        n = rand()%1000;
        key = n%47;

    if(ht[key]==-1){
        ht[key]=n;
    }
    else{
        for(int i=key+1;i<50;i++){
            if(ht[i+((i-key)*(i-key))]==-1){
                ht[i+((i-key)*(i-key))]=n;
                break;
            }
        }
    }
    }

    while(1){
            printf("1.Insert\n2.Delete\n3.Search\n4.Print\n5.Exit\n");
            printf("\n\nEnter your choice : \n");
            scanf("%d",&ch);

            switch(ch){
                case 1: insert();
                        break;
                case 2: delete();
                        break;
                case 3: search();
                        break;
                case 4: print();
                        break;
                case 5: exit(0);
                        break;
                default: printf("Invalid Input !!!");
            }
        }
}

void insert(){
    int val;
    printf("Enter the element to be inserted : ");
    scanf("%d",&val);

    key = val%47;

    if(ht[key]==-1){
        ht[key]=val;
    }
    else{
        for(int i=key+1;i<50;i++){
            if(ht[i+((i-key)*(i-key))]==-1){
                ht[i+((i-key)*(i-key))]=val;
                break;
            }
        }
    }
}

void search(){
    int val;
    printf("Enter the element to be searched : ");
    scanf("%d",&val);

    key = val%47;

    if(ht[key]==val){
        printf("Element found at index %d\n",key);
        found++;
    }
            for(int i=key+1;i<50;i++){
                if(ht[i+((i-key)*(i-key))]==val){
                    found++;
                    printf("Element found at index %d\n",i+((i-key)*(i-key)));
                    break;
                }
            }

    if(found==0){
        printf("Element not found !!!\n");
    }
    found = 0;
}
void delete(){
    int val;

    printf("Enter the element to be deleted : ");
    scanf("%d",&val);

    key = val%47;
    

    if(ht[key]==val){
        ht[key]=-1;
        printf("Element Deleted.\n");
        cdelete++;
    }
    else{
        for(int i=key+1;i<50;i++){
            if(ht[i+((i-key)*(i-key))]==val){
                ht[i+((i-key)*(i-key))]=-1;
                printf("Element Deleted.");
                cdelete++;
                break;
            }
        }
    }

    if(cdelete==0){
        printf("Element not found !!!\n");
    }
    cdelete=0;
}
void print(){
    for(int i=0;i<50;i++){
        printf("%d\t",ht[i]);
    }
    printf("\n");
}
