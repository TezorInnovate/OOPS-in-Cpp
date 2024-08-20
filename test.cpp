#include<iostream>
using namespace std;

int main()
{
    string myNumbers[5] = {"Ten", "Twenty", "Thirty", "Fourty", "Fifty"};
for (string i : myNumbers) {
  cout << i << "\n";
}
}