#include <iostream>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

using namespace std; 

void error(char *msg){
    perror(msg);
    exit(1);
}

int main(int argc, char **argv){
    cout << "Hello World";
    int sockfd, newsockfd, portnumber;
    socklen_t clilen;
    char buffer[256]; 
    

};