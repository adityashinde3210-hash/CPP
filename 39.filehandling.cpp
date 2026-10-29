
#include <iostream> 

#include <fstream> 

#include<string> 

using namespace std; 

int main() 

{ 

    ofstream file1; 

    string data; 

    // Open file and write data 

    file1.open("stud.txt",ios::app); 

    file1<<"Hello, Welcome to C++ File Handling!\n my college is good.\n nature is good freind.\n i love mango. "; 

    cout<<"file created succesfully"; 

    file1.close(); 

    ifstream file2; 

    file2.open("stud.txt"); 

    while (getline(file2, data)) 

    { 

        cout << data << endl; 

    } 

    file2.close(); 

    return 0; 

} 

 

 

 

#include <iostream> 

#include <fstream> 

using namespace std; 

int main() 

{ 

    ifstream file; 

    char data[100]; 

    // Open file and write data 

    file.open("stud.txt",ios::binary); 

    //char data[100]; 

    file.read(data, 100); 

    cout<<"Data read"<<data; 

    file.close(); 

    return 0; 

} 

 

#include <iostream> 

#include <fstream> 

#include<cstring> 

using namespace std; 

int main() 

{ 

    ofstream file; 

    char data[100]; 

    cout<<"Enter data:"; 

    cin.getline(data,100); 

    // Open file and write data 

    file.open("stud.txt",ios::app); 

    file.write(data,strlen(data)); 

    cout<<"data write succesfully"; 

    file.close(); 

    return 0; 

} 

 
