#include<stdio.h>
#include<stdlib.h>
int main(){
  
int T,t;
scanf("%d",&T);
while(T--){
    scanf("%d",&t);
    if(t==0)
    printf("0\n");
    else if(t>0){
        if(t%2==0)
        {
         int n=t/4;
         if(4*n == t)
           printf("%d\n",2*n);
         else
           printf("IMPOSSIBLE\n");
        }
        else
        {
            int n=(t+1)/4;
            if(4*n-1 == t)
              printf("%d\n",2*n-1);
            else
              printf("IMPOSSIBLE\n");

        }

    }
    else
    {
      t=-t;
        if(t%2!=0)
        {
             int n=t/4;
             if(4*n == t)
               printf("%d\n",2*n-1);
             else
               printf("IMPOSSIBLE\n");
        }
        else
        {
                int n=(t-1)/4;
                if(4*n+1 == t)
                   printf("%d\n",2*n);
                else
                   printf("IMPOSSIBLE\n");
    
        }
    }
}

}
