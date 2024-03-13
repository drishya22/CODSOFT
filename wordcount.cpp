#include <iostream>     
#include <fstream>      
#include <string>       
#include <sstream>      
using namespace std;
int main() {
  string s;
  cout<<"ENTER THE FILE NAME: ";
  cin>>s;
  ifstream in(s); 

  if (in.is_open()) {  
    string line;         
    int count = 0;        

    while (getline(in, line)) {  
      stringstream ss(line);  
      string word;  

      while (ss >> word) {  
        count++; 
      }
    }

    in.close();  

    cout << "The word count of the file is: " << count << endl;  
  } else {
    cout << "Failed to open the file." << endl;  
  }
  return 0;

}
