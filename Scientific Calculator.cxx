#include <iostream>
#include<cmath>
using namespace std;
double add(double a,double b){
       cout<<"The sum of 'a' and 'b' is:"<<a+b<<endl;
       }
double sub(double a,double b){
       
       cout<<"The sub of 'a' and 'b' is:"<<a-b<<endl;
       }
double mul(double a,double b){
       
       cout<<"The mul of 'a' and 'b' is:"<<a*b<<endl;
       }
double divi(double a,double b){
       
       cout<<"The div of 'a' and 'b' is:"<<a/b<<endl;
       }
double modu(double a, double b){
       cout<<"The modules of a onto b is:"<<fmod(a,b)<<endl;
       }
double powe(double a, double b){
       cout<<"The power of a onto b is:"<<pow(a,b)<<endl;
       }
double epow(double a){
       double e=2.718281828459045;
        cout<<"The power of e onto a is:"<<exp(a)<<endl;
        }
double abso(double a){
       cout<<"The absolute value of "<<a<<" is:"<<abs(a)<<endl;
       }
double cosin(double a){
       cout<<"The cosine angle of "<<a<<" is:"<<cos(a)<<endl;
       }
double sine(double a){
       cout<<"The sine angle of "<<a<<" is:"<<sin(a)<<endl;
       }
double tan(double a){
       cout<<"The tangent angle of "<<a<<" is:"<<tan(a)<<endl;
       }
double root(double a,double b,double k){
       cout<<"The "<<a<<" root of "<<b<<" is:"<<pow(1.0 / a,b)<<endl;
       }
double off(double a){

       cout<<"Logged Out Successfully! "<<endl;
}
double factor(double a,double z,double fact);
double log_base(double a, double b, double k){
       if(a<=0||b<=0||b==1){
                 cout<<"Not A Number"<<endl;
                 }
                 else{
                k=log(a) / log(b);
cout<<"The logarithm of "<<a<<" to base "<<b<<" is:"<<k<<endl;      
                 }
       }
double factor(double a,double fact,double i){
      for(i=a;i>=1;i--)
      fact=fact*i;
       cout<<"The factorial of "<<a<<" is: "<<fact<<endl;
       }
int main() {
    char p;
    double fact=1;
    double a,b,k,z,i;
    double e=2.718281828459045;
    double pai=3.1415926536; 
    cout<<"                   SCIENTIFIC CALCULATOR          "<<endl<<endl;
    cout<<"                           MENU                        "<<endl;
    cout<<""<<endl;
    cout<<"               Choose an operator you want:            "<<endl;
    cout<<""<<endl;
    cout<<"For addition '+':        For modules '%':        For absolute value '|':"<<endl;
    cout<<"For subtraction '-':     For power '^':          For sine angle '$':"<<endl;
    cout<<"For multipication '*':   For logarithms '[':     For cosine angle '~':"<<endl;
    cout<<"For division '/':        For epower '@':         For tangent angle '?':"<<endl;
    cout<<"For factorial '!':       For n-th roots //first type the root then the number '#': "<<endl;
    //cout<<"                           Off                        "<<endl;
    cin>>p;
  do{       
   if(p=='!'||p=='$'||p=='~'||p=='?'||p=='|'||p=='@'){
      
                    cout<<"Enter the number to calculate:"<<endl;
                    cin>>a;
                    switch(p){
                case '!':
                  factor(a,fact,i);
                  break;
                case '|':
                  abso(a);
                  break;
                case '$':
                  sine(a);
                  break;
                case '~':
                  cosin(a);
                  break;
                case '?':
                  tan(a);
                  break;
                case '@':   
                  epow(a);
                  break;
                case ')':   
                  off(a);
                  break;
             default:
                     cout<<"invalid input"<<endl;
                     }}
                     else if(p=='+'||p=='-'||p=='*'||p=='/'||p=='%'||p=='^'||p=='#'||p=='['){
    cout<<"Enter the first number to calculate:"<<endl;
    cin>>a;
    cout<<"Enter the other number:"<<endl;
    cin>>b;
                              switch(p){
             case '+':
                   add(a,b);
                  break;
             case '-':
                   sub(a,b);
                  break;
             case '*':
                   mul(a,b);
                  break;
             case '/':
                   divi(a,b);
                   break;
             case '%':
                  modu(a,b);
                  break;
             case '^':
                  powe(a,b);
                  break;
             case '[':
                   log_base(a,b,k);
                   break;
             case '#':
                   root(a,b,k);
                   break;
             case ')':   
                  off(a);
                  break;
             default:
                     cout<<"invalid input"<<endl;
    }}
    else{
         cout<<"invalid input"<<endl; 
        }
        
    system("pause");
    return 0;}while(p=')');}
