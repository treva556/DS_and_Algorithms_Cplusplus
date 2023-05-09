// Your First C++ Program

#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}


// for (i = 0; i < n; i++) {
//  for (j = 1, sum = a[0]; j <= i; j++)
//  sum += a[j];
//  cout<<”sum for subarray 0 through “<< i <<” is “<<sum<<end1;
// }


template<class T> // overloaded operator < is used;
int binarySearch(const T arr[], int arrSize, const T& key) {
 int lo = 0, mid, hi = arrSize-1;
 while (lo <= hi) {
 mid = (lo + hi)/2;
 if (key < arr[mid])
 hi = mid - 1;
 else if (arr[mid] < key)
 lo = mid + 1;
 else return mid; // success: return the index of
 }  // the cell occupied by key;
 return -1; // failure: key is not in the array;
}
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <cctype>
// #include "trie.h"
using namespace std;
char* strupr(char *s) {
 for (char *ss = s; *s = toupper(*s); s++);
 return 0;
}
int main(int argc, char* argv[]) {
 char fileName[25], s[80], ch;
 int i, lineNum = 1;
 ifstream dictionary("dictionary");
 if (dictionary.fail()) {
 cerr << "Cannot open 'dictionary'\n";
 exit(-1);
 }

//  trie(strupr(s)); // initialize root;
 while (dictionary >> s) // initialize trie;
//  trie.insert(strupr(s));
//  trie.printTrie();
 if (argc != 2) {
 cout << "Enter a file name: ";
 cin >> fileName;
 }
 else strcpy(fileName,argv[1]);
 ifstream textFile(fileName);
 if (textFile.fail()) {
 cout << "Cannot open " << fileName << endl;
 exit(-1);
 }
 cout << "Misspelled words:\n";
 textFile.get(ch);
 while (!textFile.eof()) {
 while (true)
 if (!textFile.eof() && !isalpha(ch)) { // skip non-letters
 if (ch == '\n')
 lineNum++;
 textFile.get(ch);
 }
 else break;
 if (textFile.eof()) // spaces at the end of textFile;
 break;
 for (i = 0; !textFile.eof() && isalpha(ch); i++) {
 s[i] = toupper(ch);
 textFile.get(ch);
 }
 s[i] = '\0';
//  if (!trie.wordFound(s))
//  cout << s << " on line " << lineNum << endl;
//  }
 dictionary.close();
 textFile.close();
 return 0;
}

