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
  for(int i=0;i<n;i++){
  if(ch[i]=='a'){
   count++;
    break;}}
}
cout<<"Occurrence of words containing 'a' = "<<count;
fi.close();
return 0;
}
