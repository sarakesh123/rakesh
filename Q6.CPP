#include<iostream>
using namespace std;
int main()
{
	int b,i,a[10]={10,2,5,6,3,6,7,8,9,1};
	for(i=0;i<=4;i++)
	{
	   if(a[i]<a[10-i-1])
	   	{
	   	  b=a[i];
	   	  a[i]=a[10-i-1];
	   	  a[10-i-1]=b;
	   	  }
	   	}
	   	  for(i=0;i<=3;i++)
	   	     {
	   	      if(a[0]<a[i+1])
	   	        {
	   	           b=a[0];
	   	           a[0]=a[i+1];
	   	           a[i+1]=b;
	   	        }
	   	     }
	   	  for(i=5;i<=8;i++)
	   	     {
	   	       if(a[5]>a[i+1])
	   	           {
	   	             b=a[5];
	   	             a[5]=a[i+1];
	   	             a[i+1]=b;
	   	           }
	   	     }      
	cout<<"max="<<a[0]<<"\tmin="<<a[5];
	return 0;
}
	     	 


