#include<bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern5(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=n-i;j<=n+i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern6(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*(n-i)-1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern8(int n)
{
    int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<x;
            x=1-x;
        }
        cout<<endl;
    }
    
}

void pattern9(int n)
{
    int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=(n-i)*2;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern10(int n)
{
    int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<x<<" ";
            x++;
        }
        
        cout<<endl;
    }
}

void pattern11(int n)
{
    int x=1;
    for(int i=n;i>=1;i--)
    {
        for(char ch='A';ch<='A'+i-1;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern12(int n)
{
    int x=1;
    for(int i=1;i<=n;i++)
    {
        char ch='A'+i-1;
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern13(int n)
{
    int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        char ch='A';
        int bp=(2*i-1)/2;
        for(int j=1;j<=(2*i)-1;j++)
        { 
            cout<<ch;
          if(j<=bp) ch++;
          else ch--;  
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern14(int n)
{
    int x=1;
    for(int i=1;i<=n;i++)
    {
        char ch='A'+n-i;
        for(int j=1;j<=i;j++)
        {
            cout<<ch++;
        }
        cout<<endl;
    }
}

void pattern15(int n)
{
    // int x=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern16(int n)
{
    // int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern17(int n)
{
    int x=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern18(int n)
{
    int x=1;
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            if(i==0 || j==0 || i==2*n-2 || j==2*n-2)
            cout<<n;
            else 
            cout<<n-min(min(i,2*n-2-i),min(j,2*n-2-j));
        }
        cout<<endl;
    }
}
int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        pattern18(n);
    }
    
}