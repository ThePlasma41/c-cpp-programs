#include <iostream>
using namespace std;
int main(void) {
    int n,k=1;
    cin>>n;

    int x=(n-1)/2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i<=(n-1)/2)
              {
                  if(j>=i && j<=n-1-i)
                  {
                       if(i%2==0) cout<<'*';
                       else cout<<'#';
                   }
                  else{  //alternate
                        if(j%2==0)cout<<'*'; 
                        else cout<<'#';
                      }
              }
          else{
                if(j>=x-k && j<=x+k)
               {
                    if(i%2==0)  cout<<'*';
                    else        cout<<'#';
               }
               else
               {   //alternate
                    if(j%2==0)  cout<<'*';
                    else        cout<<'#';
               }
        }
      }
        if(i>x)k++;
        cout<<endl;
     }
}

