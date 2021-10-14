/*
Problem statement: http://www.usaco.org/index.php?page=viewproblem2&cpid=915
*/

#include <iostream>
#include <fstream>
using namespace std;
 
int main(void)
{
  int a, b, c;
  ifstream fin ("herding.in");
  fin >> a >> b >> c;
  ofstream fout ("herding.out");

  if(b-a==1 && c-b==1)
  fout<<"0\n";
  else if(b-a==2 || c-b==2)
  fout<<"1\n";
  else
  fout<<"2\n";

  fout << max(b-a, c-b) - 1 << "\n";
  return 0;
}
