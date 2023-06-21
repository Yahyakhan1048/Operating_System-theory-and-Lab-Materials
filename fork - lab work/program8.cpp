#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main(){
    /*  Using fork() - system call and Creating two child process such that
        ProcessA is the Parent process with a Child Process B and 
        Process B is the parent process of a child process C.

        That is:  ProcessA --->  ProcessB ---> ProcessC */

    cout<<"\n1 - This is a Main Running Process without a Child at the moment with process ID: "<<getpid()<<endl<<endl;

    pid_t pidA, pidB, pidC;

    pidA = fork();

    if(pidA == 0 && pidA != -1){
        //This is a Child Process(B) of Process A.
        cout<<"2 - This is a process B, the child of Process A with process id: "<<getpid()<<endl;
        pidB = fork();
        if (pidB == 0 && pidB != -1){
            //This is a Child Process(C) of Process B.
            cout<<"3 - This is a process C, the child of Process B with process ID: "<<getpid()<<endl;
        }else{
            //This is the Parent process of Process C which is Process B.
            cout<<"4 - This is a process B, the Parent of Process C with process ID: "<<getpid()<<endl;

        }
    }else {
        //This is the main Parent A Process.
        cout<<"5 - This is a process A, the main Process with Process ID: "<<getpid()<<endl;

    }

    

    return 0;
}