

#include<bits/stdc++.h>
#include<iostream>    
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<ctime>
using namespace std;
//by : Amr Eid

int main(){
    int x,z,y;
    cout<<"plz choize \n(1)addition\n(2)subtraction \n(3)multiplication \n(4)division\n ";
    cin>>x;
    if(x>0 && x<5){
        cout<<"plz Entur 2 number :  ";
        cin>>z>>y;   
        if(x==1){
            cout<< x <<" + "<< y <<" = "<< x+y <<endl; ;    
        }
        else if(x==2){
            cout<< x <<" - "<< y <<" = "<< x-y <<endl;    
        }
        else if(x==3){
            cout<< x <<" * "<< y <<" = "<<(long) x*y <<endl; 
        }
        else if(x==4){
            if(y==0)
                cout<<"sorry , Divide by zero is not correct";
            else
                cout<< x <<" / "<< y <<" = "<<(double) x/y <<endl;    
        }
    }
    else {
        cout<<"plz Entur number betwen 1 to 4 .";
    }
    return 0;
}
