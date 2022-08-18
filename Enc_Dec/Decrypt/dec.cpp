#include<bits/stdc++.h>
using namespace std;

typedef class Dec{

private :

string s;
int n;
int i;
int key;
char ori ;

    string dec(string s , int st)
        {
            string s2;
            n=s.length();
            char s1[n];
            int c=n+13,d=n/3,i;

                for(i=0 ; i< n ;i++)
                    {
                    ori = s[i] - (c+d) *(++st) ;
                    s1[i]=ori;
                    c++;
                    d++;
                    }

                    for(i=0;i<n;i++)
                    {
                       s2+=s1[i];
                    }

        return s2;
        }

        public:
        void get(){
            cout<<"Enter encrypted string\n";
            getline(cin,s);
            cout<<"Enter Decrypting key\n";
            cin>>key;
           s= dec(s,key);
           system("CLS");
            disp();

        }
        void disp()
        {
            cout<<"Decrypted String is :"<<s;
        }

}di;

int main(void){

di dec;

dec.get();

}

