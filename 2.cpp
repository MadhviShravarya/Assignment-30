#include<iostream>
#include<cstdlib>
using namespace std;



float area(float l,float b)
{
        return (l * b);
}
int main()
{
        float b,h,l;
        int ch=1;

        do
        {
                cout<<"\n\n enter any non zero number to continue ";
                 cout<<"\n\n enter zero number to discontinue\n ";
                cin>>ch;
                        if(ch!=0)
                        {
						  cout<<"\n  Area of Rectangle";
                         {
                                cout<<"\n Enter the Length & Bredth of Rectangle : ";
                                cin>>l>>b;
                                cout<<"\n Area of Rectangle : "<<area(l,b);
                               
                         }
                        
						}
                        if(ch==0)
                        {   cout<<"try again!";
                        	break;
						}
                        
        }while(ch!=0);
        return 0;
}
