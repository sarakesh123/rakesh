#include<iostream>
int main()
{
    double x,y;
    std::cout<<"enter the value of x:\n";
    std::cin>>x;
    y=x+1/(x+(1/(x+1/x)));
    std::cout<<"the answer is:"<<y<<"\n";
}

