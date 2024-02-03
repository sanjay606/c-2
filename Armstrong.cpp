# include <iostream>
using namespace std;
int main(){
    int n,r,sum=0,t;
    cout<<"enter the number"<<endl;
    cin>>n;
    t=n;
    while (n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;

    }
    if (t==sum)
    {
        cout<<" number is armstrong"<<endl;

    }
    else{
          cout<<" number is not armstrong"<<endl;
    }
}