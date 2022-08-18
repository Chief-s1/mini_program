#include<bits/stdc++.h>

using namespace std;
typedef class info{
    
private:
    string s;
    int st;

    
string enc(string s, int st)
{
char rep;

int n =s.length();

char s1[n];

int c=n+13,d=n/3;


    for(int i = 0 ; i< n ; i++ )
        {
            rep = s[i] + (c+d) *(++st) ;
            s1[i]=rep;
            c++;
            d++;
        }   
    string s22;
    for(int i =0 ; i<n ;i++)
    {
        s22+=s1[i];
    }
    return s22;
}



public:

void get()
{

cout<<"Enter...\n";

getline(cin, s);

cout<<"Enter key value \n";
cin>>st;
system("CLS");
s=enc(s,st);
disp();
}

void disp(){
    cout<<endl;
    cout<<"Encrypted key:"<<s;
}

}in;


int main(void)
{
in psd; 
psd.get();

}