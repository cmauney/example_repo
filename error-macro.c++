#include <bits/stdc++.h>

using namespace std;

#define error(args...) { vector<string> _v = split(#args, ','); err(_v.begin(), args); }

vector<string> split(const string& s, char c)
{
  vector<string> v;
  stringstream ss(s);
  string x;
  while (getline(ss,x,c))
    v.emplace_back(x);
  return move(v);
}

void err(vector<string>::iterator it) {}
template<typename T, typename... Args>
void err(vector<string>::iterator it, T a, Args... args)
{
  cerr << it -> substr((*it)[0] == ' ', it -> length()) << " = " << a << '\n';
  err(++it, args...);
}

int main()
{
  int a = 4, b = 4;
  string c="9()-=$";
  error(a, b, c);
}


