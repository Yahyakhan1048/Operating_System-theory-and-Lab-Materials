#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main(){
    /*  Using fork() - system call and displaying messages from both processes*/

    // Declaring variables for process id.
    pid_t process_ID;

    cout<<"This is a main(Parent) Process running at the moment, with Process ID of:"<<getpid()<<endl<<endl;

    process_ID = fork();

    if(process_ID == -1){
        cout<<"There was an error while creating a child process."<<endl;
    }else if(process_ID == 0){
        int x, y, sum;
        x = 5;
        y = 10;
        sum = x + y;
        cout<<"Child Process found the: ";
        cout<<"Sum of both numbers which is: "<<sum<<endl;

    }else{
        int m, n, product;
        m = 5;
        n = 10;
        product = m * n;
        cout<<"Parent Process found the: ";
        cout<<"Product of both numbers which is: "<<product<<endl;
    }

    return 0;
}