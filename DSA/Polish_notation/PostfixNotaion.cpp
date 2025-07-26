#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll precedence(char op){
    if(op=='^') return 3;
    if(op=='*' || op=='/') return 2;
    if(op=='+' || op=='-') return 1;
    return 0;
}

string infixtopostfix(string &expr){
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

ll postfixEvaluation(string &expr){
    stack <ll> stl;
    for(char c: expr){
        if(c==' ')continue;
        if(isdigit(c))stl.push(c-'0');
        else if(precedence(c)){
            ll b= stl.top();
            stl.pop();
            ll a= stl.top();
            stl.pop(); 
            ll res= applyOP(a,b,c);
            stl.push(res);
        }
    }
    return stl.top();
}

int main(){
    cout << "Enter infix expression:" << endl;
    string infix;
    getline(cin, infix);

    string postfix=infixtopostfix(infix);
    cout << "Postfix: "<< postfix << endl;

    cout << "Evaluation: " << postfixEvaluation(postfix) << endl;
    return 0;
}