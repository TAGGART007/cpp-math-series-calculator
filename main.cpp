#include <iostream>
#include<math.h>
using namespace std;

void q7();
void q4();
void q5();

int main()
{
q5();

}

void q6()
{


}
void q5()
{

    int ans;
    int n;
    for(int i=10 ; i>=6 ; --i)
    {
        n=i-1;

       ans+= pow(i,n);
       cout<<ans<<" ";

    }


}

void q4()
{

    int n;
    cin>>n;
    int ans=0;
    for(int i=1 ; i<=n ; ++i)
    {

       ans+= pow(i,i);
       cout<<ans<<" ";

    }

}






void q7()
{

      int cal;

  cal=700*10+20%5*5*1000;
  cout<<cal;
}
