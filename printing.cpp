#include <iostream>
using namespace std;
int main()
{

//Q1
/*     *****
       *****
       *****  
*/    
  /* int m,n;
    cout<<"Enter M: ";
    cin>>m;
    cout<<"Enter N: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    } */

//Q2
/*    ******
      *    * 
      *    *
      ****** 
*/    

    /* int m=6,n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 || i==n || j==1 || j==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }*/

//Q3
/*  * 
    **
    ***
    **** */    

/*int n=4,m=4;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(j<=i){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}*/

//Q4
/*    ****
      ***
      **
      *
 
 */
/*int n=20,m=20;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<"*";
    }
    m--;
    cout<<endl;
    }*/

//Q5
/* * 
  ***
 *****
*******  */    

    /*int n=50;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1);k++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }*/


  //Q6 
  /* 1234567
     2345671
     3456712
     4567123
     5671234
     6712345
     7123456*/

    /*int n=3;
   for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j++){
        cout<<j;
    }
    for(int k=1;k<i;k++){
        cout<<k;
    }
    cout<<endl;
   }*/

//Q7
/*123456
  123456
  123456
  123456*/

   /*int n=7,m=9;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<j;
    }
    cout<<endl;
   }*/

//Q8
/*   121212
     212121
     121212
     212121
     
     */
/*int n=4,m=6;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=m;j++)
    {
       if((i+j)%2==0)
       {
        cout<<"1";
       } 
       else
       {
        cout<<"2";
       }
    }
    cout<<endl;
}*/

//Q9
/*      1
       121
      12321
     1234321    */
   /*int n=7;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int a=1;a<=i;a++)
        {
            cout<<a;
        }
        for(int c=(i-1);c>=1;c--)
        {
           cout<<c;
        }
        cout<<endl;
    } */

    return 0;

}


