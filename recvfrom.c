#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>

void errorProc(const char*);
int main(int argc, char** argv){
	int mySock, readLen, nRecv, res;
	char buff[BUFSIZ];
	struct sockaddr_in srcAddr, destAddr;
	socklen_t addrLen;

	if(argc != 2){
		fprintf(stderr, "Usage: %s Port", argv[0]);
		return 0;
	}

	mySock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);	// UDP socket
	if(mySock == -1) errorProc("socket");
	memset(&srcAddr, 0, sizeof(srcAddr));			// Init 0
	srcAddr.sin_addr.s_addr = htonl(INADDR_ANY);		// Input IP addr
	srcAddr.sin_family = AF_INET;				// IPv4
	srcAddr.sin_port = htons(atoi(argv[1]));		// Input Port num

	res = bind(mySock, (struct sockaddr*)&srcAddr, sizeof(srcAddr));
	if (res == -1) errorProc("bind");
	addrLen = sizeof(destAddr);

	while(1){
		nRecv = recvfrom(mySock, buff, BUFSIZ-1, 0, (struct sockaddr*)&destAddr, &addrLen);
		// Receiving Message
		if(nRecv == -1) errorProc("recvfrom");
		printf("%d bytes were recv. \n", nRecv);
	}
	close(mySock);
	return 0;
}
void errorProc(const char* str){
	fprintf(stderr, "%s: %s \n", str, strerror(errno));
	exit(1);
}
