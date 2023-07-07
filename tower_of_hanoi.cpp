#include <iostream>
using namespace std;

void towerofHanoi(int n, char source, char destination, char helper)
{
  if (n == 0)
  {
    return;
  }
  // when block moves from source stick to helper stick then the helper stick will become destination stick.
  towerofHanoi(n - 1, source, helper, destination);
  
  //move nth block from source to destination
  cout << "Move "<< n <<" from " << source << " to " << destination << endl;

  // then the block will move from helper stick to destination stick then the destination stick will become source stick.
  towerofHanoi(n - 1, helper, destination, source); 
}

int main()
{
  int n;
  char source = 'A',
       helper = 'B',
       destination = 'C';

  cout << endl
       << "  |    |    |  " << endl;
  cout << "  |    |    |  " << endl;
  cout << "__|____|____|__" << endl;
  cout << "  A    B    C  " << endl
       << endl;
  cout << "Enter the number of blocks : ";
  cin >> n;
  towerofHanoi(n, source, destination, helper);

  
  return 0;
}