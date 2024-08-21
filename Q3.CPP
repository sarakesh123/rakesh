#include<iostream>
int main()
{
    char vowel1,vowel2,vowel3,vowel4,vowel5,capvowel1,capvowel2,capvowel3,capvowel4,capvowel5;
        std::cout<<"enter vowels in small letters: ";
        std::cin>>vowel1>>vowel2>>vowel3>>vowel4>>vowel5;
    float a,b,A,B;
    a=vowel2-vowel1;
    b=vowel5-vowel2;
        std::cout<<"\n the vowel2-vowel1 is: "<<a;
        std::cout<<"\n the vowel5-vowel2 is: "<<b;
        std::cout<<"enter vowels are in capital letter";
        std::cin>>capvowel1>>capvowel2>>capvowel3>>capvowel4>>capvowel5;
    A=capvowel1-capvowel2;
    B=capvowel5-capvowel2;
        std::cout<<"\n the capvowel2-capvowel1 is: "<<A;
        std::cout<<"\n the capvowel2-capvowel1 is: "<<B;
        std::cout<<"\n second part of the question: ";
    float x,y,ch_x;
        std::cout<<"enter y=";
        std::cin>>y;
    x=y-20*6/9;
        std::cout<<"\n the required x="<<x;
    ch_x=y-20*6/9.0;
        std::cout<<"\n the required expected x="<<ch_x;
        std::cout<<"\n";
return 0;
}
