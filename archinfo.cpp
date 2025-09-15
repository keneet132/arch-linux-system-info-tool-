#include<iostream>
#include<cstdlib>
using namespace std;

void kernel()
{
    cout<<"kernel: "<<flush;
    system("uname -r");
    cout<<endl;
    
}
void cpu()
{
    cout<<"cpu "<<flush;
    system("cat /proc/cpuinfo | grep 'model name' | uniq");
    cout<<endl;}
void mem()
{
    cout<<""<<flush;
    system("cat /proc/meminfo | grep 'MemTotal' | uniq");
    cout<<endl;
}
void host()
{
    cout<<"name: "<<flush;
    system("uname -n");
    cout<<endl;
}
void uptime()
{
    cout<<"uptime: "<<flush;
    system("uptime -p");
    cout<<endl;
}
void network()
{
    cout<<"network: "<<flush;
    system("iwgetid");
    cout<<endl;
}

int main()
{
    cout << "-----------------------------" << endl;
cout << "   System Information Tool   " << endl;
cout << "-----------------------------" << endl;


kernel();
cpu();
mem();
host();
uptime();
network();
}
