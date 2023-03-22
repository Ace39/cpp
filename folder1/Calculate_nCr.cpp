/*
nCr = n!/((n-r)!*r!)
     so over here function can be used correctly because if we go on by individually calculating their factorial three times
     then the programwill become long so here we will create a function and then calculate nCr*/
     #include<iostream>
     using namespace std;
     int fact(int n)
     {
       int f=1;
        for(int i=1;i<=n;i++)
        {
            f=f*i;
        }
        return(f);
     }
     int main()
     {
        int m,r;
        cin>>m>>r;
        cout<<fact(m)/((fact(m-r))*fact(r));
     }