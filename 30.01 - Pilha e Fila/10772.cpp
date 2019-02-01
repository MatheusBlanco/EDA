#include <bits/stdc++.h>

using namespace std;

int main(){
    string expression;
    int cases;

    cin >> cases;
    if(cases >= 1000) exit;
    else{
        for(int i = 0; i < cases; i++){
        getline(cin, expression);
        string postfix = inf_post(expression);
        cout << postfix << '\n';
        }
    }

    return 0;
}

bool is_operand(char c){
    if(c >= '0' && c <= '9') return true;
    if(c >= 'a' && c <= 'z') return true;
    if(c >= 'A' && c <= 'Z') return true;
    return false;
}

bool is_operator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^') return true;
    return false;
}

int rightAssociate(char op){
    if(op == '^') return true;
    return false;
}

int weight(char op){
    int weight = -1;
    switch(op){
        case '+':
        case '-':
            weight = 1;
        case '*':
        case '/':
            weight = 2;
        case '^':
            weight = 3;
    }

    return weight;
}

int higherPrec(char op1, char op2){
    int op1Weight = weight(op1);
    int op2Weight = weight(op2);

    if(op1Weight == op2Weight){
        if(rightAssociate(op1)) return false;
        else return true;
    }

    return op1Weight > op2Weight ? true : false;
}

string inf_post(string expression){
    stack<char> s;
    string postfix = "";
    for(int i = 0; i < expression.length(); i++){
        if(expression[i] == ' ' || expression[i] == ',') continue;
        else if(is_operator(expression[i])){
            while(!s.empty() && s.top() != '(' && higherPrec(s.top(), expression[i])){
                postfix += s.top();
                s.pop();
            }
            s.push(expression[i]);
        } else if(is_operand(expression[i])){
            postfix += expression[i];
        } else if(expression[i] == '('){
            s.push(expression[i]);
        } else if(expression[i] == ')'){
            while(!s.empty() && s.top() != '('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
    }

    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }

    return postfix;
}