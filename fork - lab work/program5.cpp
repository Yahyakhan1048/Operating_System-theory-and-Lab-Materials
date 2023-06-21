#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main(){
    /*  Using fork() - system call and check what value does it return back.*/

    pid_t process_id;
    process_id = getpid();

    cout<<"The Process ID of this running process is: "<<process_id<<endl<<endl;

    cout<<"The fork System call returns this values: "<<fork()<<endl;

    // Note 1: fork system call returns "-1" value indicating can error.
    // Note 1: fork system call returns Process ID of child in Parent process.
    // Note 2: fork system call returns Process ID "0" in child process.

    cin.get();
    return 0;
}