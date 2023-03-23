#include<iostream>
using namespace std;
int main(){
int age ;
cout<<"Enter your age :";
cin>>age;
if((age>18)&&(age<25)){
cout<<"you are invited ";
}
else if(age>25){
cout<<"you are too elder please send your chlid :) ";
}
else if(age<18){
cout<<"this is time to watch captain america not naughty america :) ";
}

    return 0;

}