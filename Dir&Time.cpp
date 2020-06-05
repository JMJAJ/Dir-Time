#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <sys/types.h>
#include <ctime>

using namespace std;

string Path()
{
    char buffer[MAX_PATH];
    GetModuleFileName(NULL, buffer, MAX_PATH);
    string::size_type pos = string(buffer).find_last_of("\\/");
    return string(buffer).substr(0, pos);
}

void date();

int main()
{
    system("cls");
    cout << "Dir: " << Path() << endl;
    date();
}

void date()
{
    time_t tt;
    struct tm *ti;

    time(&tt);
    ti = localtime(&tt);

    cout << "Time is " << asctime(ti);
}