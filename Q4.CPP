#include<iostream>

using namespacc std;

void display(int x){
    int size;
    size=32;
    bool bits[size];
    for(int i=0;i<size,++i){
        bits[i]=false;
    }
    for(int i=0;i<size,++i){
        if(x&(1<<i)){
            bits[i]=true;
        }
     }

//output representation in binary

for(int i=size-1;i>=0;--i){
    if(bits[i])
        cout<<1;
    else
        cout<<0;
    }
cout<<endl;
}
int main(){
    int x,y;
    cout<<"enter a positive and a negative integer"<<endl;
    cin>>x>>y;
    cout<<"memory representation of the positive integer:"<<endl;
    display(x);
    cout<<"memory representation of the negative integer:"<<endl;
    display(y);
}


    
        

        

