#define max 8
int arr[max];
void main()
{
    int i,j;
    printf("enter and print the unsorted elemnt");
    for(i=0;i<=7;i++)
    {
        scanf("%d",&arr[i]);
        printf("%d\n",arr[i]);
    }
    mergesort(0,7);
    printf("sorted array are:\n");
    for(i=0;i<7;i++)
    printf("%d",arr[i]);
}
mergesort(int lb,int ub)
{
    
    if(lb!=ub)
    {
        int mid;
        mid=(lb+ub)/2;
        mergesort(lb,mid);
        mergesort(mid+1,ub);
        merge(lb,mid,ub);
    }
}
merge( int lb, int mid, int ub)
{
    int b[max];
    int i=lb;
    int k=lb;
    int j=mid +1;

while(i<=mid&&j<=ub)
{

    if(arr[i]<=arr[j])
    {
        b[k]=arr[i];
        i++;
        k++;

    }
    else
    {
        b[k]=arr[j];
        j++;
        k++;

    }
}
if(i>mid)
{
    while(j<=ub)
    {
        b[k]=arr[j];
        j++;
        k++;

    }
}
else
{
    while(i<=mid)
    {
        b[k]=arr[i];
        i++;
        k++;
    }
}
for(i=lb;i<=ub;i++)
{
    arr[i]=b[i];
}

}
