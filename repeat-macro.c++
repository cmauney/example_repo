#include <bits/stdc++.h>

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i!= (end - ((begin) > end)); i+= 1 - 2 * ((begin) > (end)))

using namespace std;

int main()
{

  vector<int> v = {4, 5, 6, 7, 15};
  rep(it, end(v), begin(v))
    cout << *it << ' ';
}
