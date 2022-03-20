#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdio>
using namespace std;
int main(){
ifstream fi("file.txt");
int count=0;
char ch[20],c[]="the";
while(fi){
  fi>>ch;
  if(strcmp(ch,c)==0) count++;
}
cout<<"Occurrence of 'the' in file = "<<count;
fi.close();
return 0;
}
