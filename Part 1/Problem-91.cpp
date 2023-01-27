/*
  In order to access the Internet, each computer is assigned a so-called IP-address. It consists of four integers of range [0, 255] separated by dots.
  The next three rows show three correct IP-address:
  127.0.0.0
  192.168.0.01
  255.00.255.255

  Write a program that determines whether a given string is a valid IP-address.
*/

#include <iostream> 
 
using namespace std; 
 
int ipc (int * ip, int io) 
{ 
  for (int i = 0; i < 4; i++) 
    if (ip[i] < 0 || ip[i] > 255) io = 0; 
 
  return io; 
} 
 
int main () 
{ 
  char dot; 
  int ip[4], io = 1; 
 
  for (int i = 0; i < 4; i++) { 
    cin >> ip[i]; 
    if (i < 3) cin >> dot; 
    if (dot != '.') { 
      io = 0; 
      goto l; 
    } 
  } 
  io = ipc(ip, io);
  l: 
    cout << io; 
 
  return 0; 
}
