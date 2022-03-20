#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdio>
using namespace std;
int main(){
ifstream fi("file.txt");
int count=0;
char ch[20],c[20];

while(fi){
  fi>>ch;
  if(ch[0]=='e')
   count++;
}
cout<<"Occurrence of words starting with 'e' = "<<count;
fi.close();
return 0;
}

