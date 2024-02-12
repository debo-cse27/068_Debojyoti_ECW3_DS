printf("\nEnter the number of elements in the array: ");
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
