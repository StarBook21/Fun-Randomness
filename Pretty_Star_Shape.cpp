#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
  int size;
  char s;
  cout << "Gimme a number, if you please: ";
  cin >> size;
  int mid = (size/2) + 1;
  for (int r = 1; r <= size; r++){
    if (r%2 == 0){
      s = '~';
    }
    else{
      s = '*';
    }
    for(int c = 1; c <= size; c++){
        if (c == mid && r == mid){
           cout << " $ ";
        }
        else if (r == mid){
            cout << " " << s << " ";
        }
        else if (c == mid){
            cout << " " << s << " ";
        }
        else if (c == r || c + r == size +1){
            cout << " " << s << " ";
      }
        else{
            cout << "   ";
      }
    }
    cout << endl;
  }
  return 0;
}
