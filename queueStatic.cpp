#include <iostream>
#include <queue>

using namespace std;

int main()
{

  queue<string> animals;

  animals.push("Cat");
  animals.push("Dog");
  animals.push("Fish");
  animals.push("Bear");
  animals.push("Bird");

  cout << "Queue: ";

  while (!animals.empty())
  {

    cout << animals.front() << ",";

    animals.pop();
  }

  cout << endl;

  return 0;
}
