#include<stdio.h>
void search(int arr[],int size);
int main(){

int arr[10],size,i,mid,src,choice;
        printf("Which Type You want to search ? 1. Binary  2. Linear :");
        scanf("%d",&choice);
        switch(choice){

        case 1 :

        printf("Enter the term You want : ");
        scanf("%d",&size);
        for(i = 0; i < size; i ++){
        printf("Entet the value of [%d] : ",i+1);
        scanf("%d",&arr[i]);
       }
        printf("Enter Your target : ");
        scanf("%d",&src);

        int left=0;
        int right=size-1;

        while(left <= right){
            mid = (left + right)/2;
            if( arr[mid] == src ){
                printf("Binary Data Found in %d position.",mid+1);
                return 0;
            }else if( arr[mid] < src){
                left = mid + 1;
            }else{
                right = mid - 1;
            }

        }
        printf("Not found.");

        case 2 :



       printf("Enter the term You want : ");
       scanf("%d",&size);

       for(i = 0; i < size; i ++){
        printf("Entet the value of [%d] : ",i+1);
        scanf("%d",&arr[i]);
       }

    int i,src;
        printf("Enter The value you want to search :");
        scanf("%d",&src);
    for( i = 0 ; i < size ; i++){
            if(arr[i] == src){
                printf("Linear Data found in %d position .",i+1);
                break;
            }
        }
        if( i == size){
            printf("\n\n data not found 404.");
        }

}

return 0;
}

