#include <iostream>
using namespace std;
void Baby_Sharkinator(string a);
int main(){
  Baby_Sharkinator("Baby Shark");
  Baby_Sharkinator("Mommy Shark");
  Baby_Sharkinator("Daddy Shark");
  Baby_Sharkinator("Grandma Shark");
  Baby_Sharkinator("Grandpa Shark");
  Baby_Sharkinator("Run away!");
  Baby_Sharkinator("Safe at last");
  return 0;
}
void Baby_Sharkinator(string a){
  for(int r = 0; r < 7; r++){
   for(int c = 0; c < 5; c++) {
     if(c == 0 && r%2 == 0) cout << a;
     else if (r%2 == 0) cout << " ";
     else cout <<"doo ";
   }
   cout << endl;
  }
  cout << endl;
}
