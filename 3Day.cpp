
Conditional statement

Que 1

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the numer"<<endl;
    cin>>age;
    if(age>18){
        cout<<"They are eligibale to vote"<<endl;
    }else{
        cout<<"they are not give vote"<<endl;
    }
    return 0;
}

que 2

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"it is even number"<<endl;
        
    }
    else{
        cout<<"it is odd number";
    }
    return 0;
}


if-else if-else

que 2 

#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks"<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"they got it first division in the esxam"<<endl;
    }else if(marks >=70 && marks<90){
        cout<<"they are got it second devision in the examination"<<endl;
        
    }else if(marks>=33 && marks<70){
        cout<<"they are got it  third division in the examination"<<endl;
    }else{
        cout<<"they got it faield in the examination"<<endl;
    }
    return 0;
}


que 4

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the cahracter"<<endl;
    cin>>ch;
    if(ch>='a' && ch<'z'){
        cout <<"it is lower case"<<endl;
    }else{
        cout<<"it is upper case"<<endl;
    }
    return 0;
    
}


 ternary operator

condition ? stt1 : stt2;


que 5


#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    cout<<(num>=0? "it is positive number" : "it is not positiven umber")<<endl; 
    return 0;
}



LOOP
while loop

que 6

#include<iostream>
using namespace std;
int main(){
    int i=5;
    cout<<"Enter the number"<<endl;
    // cin>>i;
    while(i<=50){
          cout<<i<<endl;
        i+=5;
    
       
    }
    cout<<""<<endl;
    
    return 0;
}


for loop

que 7

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for(int i=0;i<=num; i++){
        cout<<i<<endl;
    }
    cout<<""<<endl;
    return 0;
}

que 8

#include<iostream>
using namespace std;
int main(){
    int num, sum=0;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for(int i=1; i<=num; i++){
        sum=sum+i;
    }
    cout<<"the number of sum is"<<sum<<endl;
    return 0;
}


que 9

#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for(int i=1; i<=num; i++){
        if(i%2 !=0){
            sum=sum+i;
        }
        }
     cout<<"the sum of number is  "<<sum<<endl;
    return 0;
}

que 10
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for(int i=2; i<=num; i++){
        if(i%2==0){
            
            cout<<i<<endl;
        }
    }
    cout<<endl;
    return 0;
}



do while loop


que 11


#include<iostream>
using namespace std;
int main(){
    int n=10;
    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=n);
    cout<<endl;
    return 0;
}

 que 12 check if a number i prime or not

#include<iostream>
using namespace std;
int main(){
    int n=11;
    bool isPrime = true;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"it is prime number :"<<endl;
    }else{
        cout<<"it is not prime number : "<<endl;
    }
    return 0;
    
        
}


Nested loop
loop inside loop

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter thr number "<<endl;
    cin>>num;
    for(int i=1; i<=num; i++){
        for(int i=1; i<=num; i++){
             cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
    
    
}

1 Write a c++ program to calculate Area and circumfrence of circle. tkae the value of radiou from user,

#include<iostream>
using namespace std;
int main(){
    float r,A,C;
    cout<<"Enter the value of radius: ";
    cin>>r;
    A=3.1415*r*r;
    C=2*3.1415*r;
    cout<<"Area of circle of"<<A<<endl;
    cout<<"Circumfrence of circle is: "<<C<<endl;
    return 0;
    
}

2  Program to swap two number. take input from user

#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Before swaping :"<<endl;
    cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After swaping "<<a<<b<<endl;
    return 0;
}

2 swaping taking third variable

#include<iostream>
using namespace  std;
int main(){
    int a,b,temp;
    cout<<"Enter the tow number :"<<endl;
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swaping the number"<<a<<b<<endl;
    return 0;
}

3  Without takinking third variable

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"before swaping: "<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swaping :"<<a<<b<<endl;
    return 0;
}


4 Maxium three number

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number:"<<endl;
    cin>>a>>b>>c;
    if(a>b){
        cout<<"a is largest number:"<<endl;
    }
     else if(b>c){
        cout<<"b is largest number: " <<endl;
        
    }
    else{
        cout<<"c is largest number:"<<endl;
    }
}


5 Minimium nuumber amoong the three number

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three number: "<<endl;
    cin>>a>>b>>c;
    if(a<b){
        cout<<"a is minum number"<<endl;
        
    }else if(b<c){
        cout<<"b is a minium number : "<<endl;
        
    }else{
        cout<<"c is minimum number: "<<endl;
    }
}


6  maixium and minumu number

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number: "<<endl;
    cin>>a>>b>>c;
    if(a>b){
        cout<< "a is largerst number"<<endl;
    }else if(b>c){
        cout<< "b is largest number"<<endl;
        
    }else{
        cout<< "c is largest number"<<endl;
    }
    if(a<b){
        cout<< "a is minum number"<<endl;
    }else if(b<c){
        cout<< "b is minum number"<<endl;
        
    }else{
        cout<< "c is minum number"<<endl;
    }
  return 0;
}


7 maxium adn minimum and sum adn average

#include<iostream>
using namespace std;
int main(){
    int a,b,c, sum;
    float Average;
    cout<<"Enter the three number: "<<endl;
    cin>>a>>b>>c;
    if (a>b){
        cout<<"a i largest number: "<<endl;
        
    }else if(b>c){
        cout<<"b is largest number: "<<endl;
}else{
    cout<<"c is largest number"<<endl;
}if(a<b){
    cout<<"a is minimum number: "<<endl;
}else if(b<c){
    cout<<"c is minimum number: "<<endl;
}
sum=a+b+c;
cout<<"the sum is: "<<sum<<endl;
Average=sum/3;
cout<<"The average of three num is: "<<Average<<endl;
return 0;
    
}

8  check whether a number is even or odd

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : "<<endl;
    cin>>a;
    if(a%2==0){
        cout<<a <<" is the number is even :"<<endl;
    }else{
        cout<<a <<" is The number is odd: "<<endl;
    }
    return 0;
}


9  it is diviible by 5 or not

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"ENter the the number: "<<endl;
    cin>>a;
    if(a%5==0){
        cout<<a<<"  it is"<<endl;
    }else{
        cout<<a<< " it is not"<<endl;
    }
    return 0;
}
