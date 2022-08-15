/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>

using namespace std;

int main() {

  char S[20];

  cout<<"Masukkan nama Anda: ";

  // Meminta input dari user
  cin.getline(S, sizeof(S) - 1);

  // Menampilkan nama yang telah dimasukkan
  cout<<"Hai "<<S<<", apa kabarmu?"<<endl;

  return 0;	
}
