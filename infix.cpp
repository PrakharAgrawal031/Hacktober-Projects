#include<bits/stdc++.h>
using namespace std;

int cal(int v1, int v2, char op){
    if(op == '^'){
        return pow(v1,v2);
    }
    if(op == '+'){
        return v1+v2;
    }
    if(op == '-'){
        return v1-v2;
    }
    if(op == '/'){
        return (v1/v2);
    }
    else{
        return v1*v2;
    }
}

int precedence(char ch){
    if(ch=='^') return 3;
    if(ch=='*' || ch=='/') return 2;
    if(ch=='+' || ch=='-') return 1;
    else{
        return -1;
    }
}

int infix(string str){
    stack<char> ops;
    stack<char> num;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(isdigit(ch)){
            num.push(ch-'0');
        }
        else if(ch=='('){
            ops.push(ch);
        }
        else if(ch==')'){
            while(not ops.empty() && ops.top() != '('){
                char op = ops.top();
                ops.pop();

                int v2 = num.top();
                num.pop();
                int v1 = num.top();
                num.pop();
                num.push(cal(v1,v2,op));
            }
            if(not ops.empty()) ops.pop();
        }
        else{
            while(not ops.empty() && precedence(ops.top())>=precedence(ch)){
                char op = ops.top();
                ops.pop();

                int v2 = num.top();
                num.pop();
                int v1 = num.top();
                num.pop();
                num.push(cal(v1,v2,op));
            }
            ops.push(ch);
        }
    }
    while(not ops.empty()){
            char op = ops.top();
            ops.pop();

            int v2 = num.top();
            num.pop();
            int v1 = num.top();
            num.pop();
            num.push(cal(v1,v2,op));
    }
    return num.top();
}
int main(){

    string s = "1+(2*(3-1))+4";
    cout<<infix(s)<<endl;
}