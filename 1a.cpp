#include <bits/stdc++.h>

using namespace std;

int words(const char *in);

int main(){
   int x = words("one.txt"); // x = 1
   int y = words("two.txt"); // y = 2
   int z = words("five.txt"); // z = 5

   return 0;
}

int words(const char *in){
   if(!in) return 1;

   ifstream f(in);

   if(!f) return -2;

   int total = 0;
   string word;

   while(cin >> word)
      ++total;

   f.close();
}
