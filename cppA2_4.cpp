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
  int n= strlen(ch);
  if(ch[(n-1)]=='s')
   count++;
}
cout<<"Occurrence of word ending with 's' = "<<count;
fi.close();
return 0;
}
