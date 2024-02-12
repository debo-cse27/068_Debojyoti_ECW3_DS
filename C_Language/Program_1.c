/*1.Declare an array and initialise it through user input
2.Find an element in an array and if it exits return its location
3.Insert the element at any particular position
4.a Delete the element from the specified index
4.b Delete the particular from the index if it exists.
5.Make the program menu driven.*/

#include<stdio.h>
int main(){
    
    int ch;
    printf("\nEnter the operation choice you want to execute:\n1.Find using index\n2.Insert\n3.Delete using index\n4.Delete using element\n");
    scanf("%d", &ch);

    switch(ch){
        case 1: printf("\nEnter the number of elements in the array: ");
                int n;
                scanf("%d", &n);
                int arr[10];
                printf("\nEnter the values: ");
                for (int i=0;i<n;i++)
                {
                    scanf("%d", &arr[i]);
                }

                int num,i=0,found=0,pos;
                printf("Enter the element that has to be searched: ");
                scanf("%d", &num);

                for(i=0;i<n;i++)
                {
                    if(arr[i]==num)
                    {
                        found=1;
                        pos=i;
                        printf("\n %d is found in the array at position=%d", num,i);
                        break;
                    }
                }
                if (found==0)
                {
                    printf("\n %d does not exist in the array", num);
                };
            break;
        
        case 2: printf("\nEnter the number of elements in the array: ");
                int n1;
                scanf("%d", &n1);
                int arr1[10];
                printf("\n Enter the values: ");
                for (int j=0;j<n1;j++)
                {
                    scanf("%d", &arr1[i]);
                }

                int num1,pos1,j=0;
                printf("Enter the number to be inserted: ");
                scanf("%d", &num1);
                printf("Enter the position at which the number has to be inserted: ");
                scanf("%d", &pos1);

                for (j=n1-1;j>=pos1;j--)
                {
                    arr1[j+1]=arr1[j];
                }
                arr1[pos1]=num1;
                n1++;
                printf("\n The array after insertion of %d is: ", num1);

                for (j=0;j<n1;j++)
                {
                    printf("\t %d", arr1[j]);
                }
            break;
        case 3: printf("\nEnter the number of elements in the array: ");
                int n2;
                scanf("%d", &n2);
                int arr2[10];
                printf("\n Enter the values: ");
                for (int k=0;k<n2;k++)
                {
                    scanf("%d", &arr2[k]);
                }

                int k=0,pos2;
                printf("Enter the position from which the number has to be deleted: ");
                scanf("%d", &pos2);

                for (k=pos2;k<n2-1;k++)
                {
                    arr2[k]=arr2[k+1];
                }
                n2--;
                printf("\n The array after deletion is: ");

                for (k=0;k<n2;k++)
                {
                    printf("\n Arr[%d]=%d", k, arr2[k]);
                };
            break;
        case 4: printf("\nEnter the number of elements in the array: ");
                int n3;
                scanf("%d", &n3);
                int arr3[10];
                printf("\n Enter the values: ");
                for (int m=0;m<n3;m++)
                {
                    scanf("%d", &arr3[m]);
                }
                
                printf("Enter the element that has to be deleted: ");
                int num3;
                scanf("%d", &num3);
                int found1, pos3, m;

                for(m=0;m<n3;m++)
                {
                    if(arr3[m]==num3)
                    {
                        found1=1;
                        pos3=i;
                        printf("\n %d is found in the array at position=%d", num3,m);
                        break;
                    }
                }
                if (found1==0)
                {
                    printf("\n %d does not exist in the array", num3);
                }

                for (m=pos3;m<n3-1;m++)
                {
                    arr3[m]=arr3[m+1];
                }
                n3--;
                printf("\n The array after deletion is: ");

                for (m=0;m<n3;m++)
                {
                    printf("\n Arr[%d]=%d", m, arr3[m]);
                };
            break;
        default: printf("Invalid Entry!!");
            break;
    }

    return 0;
}
