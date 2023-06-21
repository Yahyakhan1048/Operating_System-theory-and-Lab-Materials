#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main(){
    /*  Using fork() - system call and check process table using ps -a command 
        in linux terminal to find process ids for this same program.*/

    pid_t process_id;
    process_id = getpid();

    cout<<"The Process ID of this running process is: "<<process_id<<endl;

    fork();

    cout<<"This is Line1."<<endl;
    cout<<"This is Line2."<<endl;
    cout<<"This is Line3."<<endl;

    cin.get();
    return 0;
}