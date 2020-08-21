/*This Function takes no arguments ,and will print 
the fractional value of the numbers
example-
n=3   //no of numbers
numerators=[1,2,5]
demominator=[2,1,6]

ans will be -> 5/6
 (1 * 2 * 5 ) / (2 * 1* 6) 
*/
/*
HowToUse-
takes and return nothing
function call ->         fractionalDivide();
*/
int fractionalDivide(void);
{   int n;
    scanf("%d",&n);
    int Num[n],Dom[n];
    for(int i=0;i<n;i++)
        scanf("%d %d",&Num[i],&Dom[i]);
    int p1=1,p2=1;
    for(int i=0;i<n;i++)
        {
            p1*=Num[i];
            p2*=Dom[i];
        }
       int min=p1>p2?p1:p2;
       for(int i=2;i<=min;i++)
       {
        if(p1%i==0 && p2%i==0)
          {
            p1/=i;
            p2/=i;
          }
       } 
       printf("%d/%d",p1,p2);
}