#include <bits/stdc++.h>

using namespace std;

bool is_valid(const string& expression){
   static map<char, char> open {{')', '('}, {']', '['}, {'}', '{'}};
   stack<char> s;

   for(auto& c : expression){
      switch(c){
         case '(':
         case '[':
         case '{':
            s.push(c);
         case ')':
         case ']':
         case '}':
            if(s.empty() || s.top() != open[c]){
               return false;
            }
            s.pop();
      }
   }

   return s.empty();
}

int main(){
   int cases;
   string expression;

   cin >> cases;
   while(cases >= 1 && cases <= 100){
      for(size_t i = 0; i < cases + 1; i++){
         getline(cin, expression, '\n');
         if(i != 0){
            cout << (is_valid(expression) ? "Compilou" : "Erro de compilação") << endl;
         }
      }
   }

   return 0;
}