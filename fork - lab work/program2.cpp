#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main(){
    /* Getting Process ID of this Program (Process)
        When it is executed using getpid() method.*/

    cout<<"The Process ID of this running process is: "<<getpid()<<endl;
    
    return 0;
}