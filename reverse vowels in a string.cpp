/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int i,j;
    char ch[100001], v[100001];
    cin>>ch;
    int c=0;
    for(i=0;ch[i];i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            v[j++]=ch[i];
        }
    }
    j=j-1;
    for(i=0;ch[i];i++)
    {
         if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
         {
             cout<<v[j--];
         }
         else
         cout<<ch[i];
        
    }
    
    return 0;
}
