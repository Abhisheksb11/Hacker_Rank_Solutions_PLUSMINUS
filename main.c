void plusMinus(int arr_count, int* arr) {

float psum=0,nsum=0,zsum=0;
int i;
for(i=0;i<arr_count;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<arr_count;i++)
{
    if(arr[i]>0)
    {
        psum++;
    }
    else if(arr[i]<0)
    {
        nsum++;
    }
    else 
    {
        zsum++;
    }
    
}

    printf("%f\n%f\n%f",psum/arr_count,nsum/arr_count,zsum/arr_count);

}
