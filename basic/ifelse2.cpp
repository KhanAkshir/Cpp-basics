#include<iostream>
using namespace std;
int main()
{
    int f;
    cout<<"enter your total marks\n";
    cin>>f;
    if(f>60)
    {
        cout<<"you are passed but \n"; 
        int h;
        cout<<"enter the marks of hindi\n";
        cin>>h;
         if(h>18)
        {
            cout<<"ok passed in hindi\n";
        }
        else
        {
            cout<<"you are failed in hindi\n";
            int o;
        cout<<"enter your optional sub marks \n";
        cin>>o;
        if(o>18)
        {
            cout<<"you are passed \n";
        }
        else
        {
           cout<<"you are fail \n"; 
        }


        }

      
      
        int e;
        cout<<"enter the marks of english\n";
        cin>>e;
       
       
        if(e>18)
        {
            cout<<"ok passed in english\n";
        }
        else
        {
            cout<<"you are failed in english\n";
            int o;
        cout<<"enter your optional sub marks \n";
        cin>>o;
        if(o>18)
        {
            cout<<"you are passed \n";
        }
        else
        {
           cout<<"you are fail \n"; 
        }

        }



    }
   
      else
    {
        cout<<"you are fail";
    }
    return 0;
}