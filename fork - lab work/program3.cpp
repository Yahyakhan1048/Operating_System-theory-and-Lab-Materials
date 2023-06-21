#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main(){
    /*  Saving the process id returned by getpid() function 
        in a variable of type pid_t */

    pid_t process_id;
    process_id = getpid();

    cout<<"The Process ID of this running process is: "<<process_id<<endl;

    return 0;
}