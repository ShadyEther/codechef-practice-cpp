//selection sort menu driven 
#include<stdio.h>
int n;
int main()
{
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("---Enter array elements---\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ch;
    printf("Enter 1 for Ascending sort\nEnter 2 for Descending sort\nEnter your choice: ");
    scanf("%d",&ch);
    int pos;
    for(int i=0; i<n-1;i++)
    {
        pos=i;int temp=0;
        for(int j=i+1;j<n;j++) 
        {       
            if(ch==1)
            {            
                if(a[j]<a[pos])
                pos=j; 
            }           
            else if(ch==2)    
            {        
                if(a[j]>a[pos])
                pos=j; 
            }                   
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }       

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}