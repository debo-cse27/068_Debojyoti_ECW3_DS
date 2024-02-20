/*1.Declare an array and initialise it through user input
2.Linear search in array
3.Insert the element at any particular position
4.Delete the element from the specified index
5.Reversing an array
6.Update the array: multiply the odd indexed elements by 2 and adding 5 to all the elements at even index.
7.Make it dynamically allocation*/


#include<stdio.h>
#include<stdlib.h>

void search(int num, int arr[], int n){
    int i=0, found=0, pos;
    printf("Enter the element that has to be serached: ");
    scanf("%d", &num);

    for(i=0;i<n;i++){
        if(arr[i]==num){
                found=1;
                pos=i;
                printf("\n %d is found in the array at position=%d", num,i+1);
                break;
        }
    }
    if (found==0){
        printf("\n %d does not exist in the array", num);
    };
}

void insert(int num, int arr[], int pos, int n){
    int i=0;
    printf("Enter the number to be inserted: ");
    scanf("%d", &num);
    printf("Enter the position at which the number has to be inserted: ");
    scanf("%d", &pos);

    for (i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    n++;
    printf("\n The array after insertion of %d is: ", num);

    for (i=0;i<n;i++){
        printf("\t %d", arr[i]);
    }
}

void delete(int pos, int arr[], int n){
    int i=0;
    printf("Enter the position from which the number has to be deleted: ");
    scanf("%d", &pos);

    for (i=(pos-1);i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("\n The array after deletion is: ");

    for (i=0;i<n;i++){
        printf("\n Arr[%d]=%d", i, arr[i]);
    };
}

void reverse(int arr[], int n){
    int j=(n)/2;
    int r = n-1;
    for(int i=0;i<j;i++){
    int  q= arr[r];
    int  a= arr[i];
    arr[i]=q;
    arr[r]=a;
    r--;
    }

    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

void update(int arr[], int n){
    for (int i=0;i<n;i++){
        if ((i+1)%2==0){
            arr[i]+=5;
        }
        else{
            arr[i]*=2;
        }
    }
    printf("The updated array is ");
    for (int i=0;i<n;i++){
        printf("\n Arr[%d]=%d", i, arr[i]);
    }
}
int main(){
    printf("\nEnter the number of elements in the array: ");
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("\n Enter the values: ");
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    int ch;
    printf("\nEnter the operation choice you want to execute:\n1.Find using index\n2.Insert\n3.Delete using index\n4.Reverse\n5.Update\n");
    scanf("%d", &ch);

    switch(ch){
        case 1: 
            search(0, arr, n);
            break;
        case 2: 
            insert(0,arr,0,n);
            break;
        case 3: 
            delete(0, arr, n);
            break;
        case 4: 
            reverse(arr, n);
            break;
        case 5: 
            update(arr, n);
            break;
        default: 
            printf("Invalid Entry!!");
            break;
    }
    free(arr);
    return 0;
}
