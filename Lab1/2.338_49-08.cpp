//Codeforce Problem no.-71A
//Problem Name-Way too long words.


#include <iostream>
#include<string.h>
using namespace std;

int main()
{
              int l,n,i;
              char word[100];

              cin>>n;
              for(i=0;i<n;i++)
              {
                            cout<<"enter word:";
                            cin>>word;
              l=strlen(word);
              if(l>10)
              cout<<word[0]<<l-2<<word[l-1]<<endl;
              else
                            cout<<word<<endl;
              }

    return 0;
}
