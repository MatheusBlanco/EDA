#include <bits/stdc++.h>

using namespace std;

// verificar a existencia de uma letra ou número
// assume-se que o operando será um char singular
bool is_operand(char C){
    if(C >= '0' && C <= '9') return true;
    if(C >= 'a' && C <= 'z') return true;
    if(C >= 'A' && C <= 'Z') return true;
    return false;
}

// verificar se um char é operador ou não
bool is_operator(char C){
    if(C == '+' || C == '-' || C == '*' || C == '/' || C == '$'){
        return true;
    }

    return false;
}

// verificar se um operador associativo da direita o não
int rightAssociate(char op){
    if(op == '$') return true;
    return false;
}

// receber o peso de um operador em relação aos demais
int opWeight(char op){
    int weight = -1;
    switch(op){
        case '+':
        case '-':
            weight = 1;
        case '*':
        case '/':
            weight = 2;
        case '$':
            weight = 3;
    }

    return weight;
}

// performar uma operacao e retornar output
int higherPrecedence(char op1, char op2){
    int op1Weight = opWeight(op1);
    int op2Weight = opWeight(op2);

    // If operators have equal precedence, return true if they are left associative.
    // return false, if right associative.
    // if operator is left-associative, left one should be given priority.
    if(op1Weight == op2Weight){
        if(rightAssociate(op1)) return false;
        else return true;
    }

    return op1Weight > op2Weight ? true : false;
}

// validar postfix expression e retornar output
string infix_postfix(string expression){
    // declarar pilha
    stack<char> s;
    string postfix = ""; // inicializar vazio
    for(int i = 0; i < expression.length(); i++){
        // scan char a partir da esquerda
        // se char for delimitador, ignorar
        if(expression[i] == ' ' || expression[i] == ',') continue;

        // se char é operador, pop dois elementos da pilha, performa operacao e push o resultado
        else if(is_operator(expression[i])){
            while(!s.empty() && s.top() != '(' && higherPrecedence(s.top(), expression[i])){
                postfix += s.top();
                s.pop();
            }
            s.push(expression[i]);
        }
        // else if char é um operand
        else if(is_operand(expression[i])){
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

int main(){
    string expression;
    int cases;

    cin >> cases;

    for(int i = 0; i < cases; i++){
        getline(cin, expression);
        string postfix = infix_postfix(expression);
        cout << postfix << '\n';
    }

    return 0;
}