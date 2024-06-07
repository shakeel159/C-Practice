
// C++ program to hide and show a console window 
#include <iostream> 
#include <windows.h>
#include <fstream>
#include <string> 
  
using namespace std;
  
int main() 
{ 
    HWND window; 
    AllocConsole(); 
    // You Can Find HANDLE of other windows too 
    window = FindWindowA("ConsoleWindowClass", NULL); 

    
    fstream my_file;
    my_file.open("C:/Workspace/src/VisualStudioProjects/ExternalFileGame/externalData/gunData.xlsx", ios::out);



    ShowWindow(window, 1); 
}