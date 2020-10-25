#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct stack{
    int top;
    int size;
    char *arr;

};
int empty(struct stack*s){
   if(s->top==-1)
   {
       return 1;
   }
   else{
       return 0;
       }


}
int full(struct stack*s){
    if(s->top==s->size-1){
        return 1;
        }else{
            return 0;
            }
    

}
void push(struct stack*s,char v){
    if(full(s)){cout<<"Stack overflow!!!!!!!"<<endl;}
    else{
        s->top++;
        s->arr[s->top]=v;
        cout<<v<<" is pushed!!"<<endl;

    }

}
void pop(struct stack*s){
     if (empty(s)){cout<<"Stack underflow!!!!!!!"<<endl;}
    else{
        char temp =s->arr[s->top];
        s->top--;
        cout<<temp<<" is poped up!!"<<endl;

    }

}



int main(){
stack*s=new stack;
s=new stack;
s->top=-1;
s->size=10;
s->arr=(char *)malloc(s->size*sizeof(char));

char*v="{{{{{{}}}}}}";

for(int i=0;i<strlen(v);i++){
    if(v[i]=='{'||v[i]=='('||v[i]=='['){
        push(s,v[i]);
        
    }
    if(v[i]=='}'||v[i]==']'||v[i]==')'){
        pop(s);
    }
}
if(empty(s)){
    cout<<"balanced"<<endl;
}else{cout<<"unbalanced"<<endl;}


}