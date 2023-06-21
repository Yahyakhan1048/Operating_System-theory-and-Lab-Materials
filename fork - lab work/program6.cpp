#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main(){
    /*  Using fork() - system call and displaying messages from both processes*/

    // Declaring variables for process id.
    pid_t process_ID;

    cout<<"This is a main(Parent) Process running at the moment, with Process ID of:"<<getpid()<<endl;

    process_ID = fork();

    if(process_ID == -1){
        cout<<"There was an error while creating a child process."<<endl;
    }else if(process_ID == 0){
        cout<<"This is a Child Process, with Process ID of: "<<getpid()<<endl;
    }else{
        cout<<"This is a Parent Process, with Process ID of: "<<getpid()<<endl;
    }


    return 0;
}