#include<iostream>
int main()
{
int x,y,w,d;
std::cout<<"enter the value of x:";
std::cin>>x;
y=x/365;
w=(x%365)/7;
d=(x%365)%7;
std::cout<<y<<" years "<<w<<" weeks "<<d<<" days\n";
}

