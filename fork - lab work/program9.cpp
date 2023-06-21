#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main(){
    /*  Using fork() - system call and Creating two direct child processes B & C of Process A.

        That is:  ProcessA --->  ProcessB 
        That is:  ProcessA --->  ProcessC    */

    cout<<"\n1 - This is a Main Running Process without a Child at the moment with process ID: "<<getpid()<<endl<<endl;

    pid_t pidA, pidB, pidC;

    pidA = fork();

    if(pidA == 0 & pidA != -1){
        //This is Child Process B of Process A.
        cout<<"2 - Child Process B: "<<getpid()<<endl;
    }else{
        //This is the Main Process A.
        cout<<"3 - Main Parent Process A: "<<getpid()<<endl;
        pidB = fork();
        if(pidB == 0 & pidB != -1){
            //This Child Process C of Process A.
            cout<<"4 - Child Process C: "<<getpid()<<endl;
        }else{
            cout<<"5 - Main Parent Process A: "<<getpid()<<endl;
        }
    }

    

    return 0;
}