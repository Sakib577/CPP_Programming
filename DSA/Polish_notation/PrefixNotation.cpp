#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll precedence(char op){
    if(op=='^') return 3;
    if(op=='*' || op=='/') return 2;
    if(op=='+' || op=='-') return 1;
    return 0;
}

string infixtoprefix(string &expr){
    reverse(expr.begin(),expr.end());

    for (ll i = 0; i < expr.size(); i++)
    {
        if(expr[i]=='(') expr[i]=')';
        else if(expr[i]==')') expr[i]='(';
    }
    
    stack<char> st;
    string output;
    
    for (ll i = 0; i < expr.size(); i++)
    {
        char ch=expr[i];

        if(isspace(ch)) continue;

        if(isdigit(ch)){
            output+=ch;
            output+=" ";
        }else if(ch == '('){
            st.push(ch);
        } else if(ch == ')'){
            while (!st.empty() && st.top()!='(')
            {
                output+= st.top();
                output+=" ";
                st.pop();
            }
            if(!st.empty())st.pop();  
        } else if(precedence(ch)){
            while (!st.empty() && precedence(st.top())>= precedence(ch))
            {
                output+=st.top();
                output+=" ";
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty())
        {
            output+=st.top();
            output+=" ";
            st.pop();
        }
    reverse(output.begin(),output.end());
    return output;
}

ll applyOP(ll a, ll b, char c){
    switch (c)
    {
    case '+':
        return a+b;
        break;
    case '-':
        return a-b;
        break;
    case '*':
        return a*b;
        break;
    case '/':
        return a/b;
        break;
    case '^':
        return powl(a,b);
        break;
    
    default:
        break;
    }
    return 0;
}

int main(){
    cout << "Enter infix expression:" << endl;
    string infix;
    getline(cin, infix);

    string prefix=infixtoprefix(infix);
    cout << "Prefix: "<< prefix << endl;
    return 0;
} 