/*
ID: waz
TASK: ride
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstdio>
#define N_DEBUG 1

using namespace std;

int read_number() {
	char c;
	int ans = 1;
	while((c = getchar()) != '\n' || c == EOF) {
   		ans *= (c - 'A' + 1);
   	}
   	return ans%47;
}

int main() {
	#if N_DEBUG 
	    freopen("ride.in","r", stdin);
    	freopen("ride.out","w", stdout);
    #endif
   	
    if(read_number() == read_number())
    	printf("GO\n");
    else
    	printf("STAY\n");
    #if N_DEBUG 
	    fclose(stdin);
	    fclose(stdout);
    #endif
    return 0;
}
