/*
     1          1           
    222        222          
   33333      33333             
  4444444    4444444            
 555555555  555555555           
6666666666666666666666          
 555555555  555555555           
  4444444    4444444            
   33333      33333             
    222        222          
     1          1           
        space  a  space  space  a 
i=1        5  1  5        5    1
i=2        4  3  4        4    3
i=3        3  5  3        3    5
i=4        2  7  2        2    7
i=5        1  9  1        1    9
i=6        0  11 0        0    11
i=5        1  9  1        1    9
i=4        2  7  2        2    7
i=3        3  5  3        3    5
i=2        4  3  4        4    3
i=1        5  1  5        5    1

*/
#include<stdio.h>
int main()
{
    int n=6;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        printf(" ");
        for(int j=1;j<=2*i-1;j++)
        printf("%d",i);
        for(int j=1;j<=2*(n-i);j++)
        printf(" ");        
        for(int j=1;j<=2*i-1;j++)
        printf("%d",i);
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        printf(" ");
        for(int j=1;j<=2*i-1;j++)
        printf("%d",i);
        for(int j=1;j<=2*(n-i);j++)
        printf(" ");        
        for(int j=1;j<=2*i-1;j++)
        printf("%d",i);
        printf("\n");
    }
}