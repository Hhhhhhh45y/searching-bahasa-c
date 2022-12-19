#include <stdio.h>
 
int linearSearch(int data[],int datayangdicari){
  
  //looping untuk mencari datanya
  int bykdata;
    for(int i= 0; i<bykdata;i++){       
      if(data[i]==datayangdicari)return i;
    }
 
  return -1;  
}
 
int main (){
  int data[4]={9,11,1,8}; //data
  int indexSearch = linearSearch(data,1); 
//(data, angka yang dicari)
 
  if(indexSearch == -1){
  printf("Data tidak ditemukan dalam array\n");
  }
  else{
  printf("Data %d ditemukan dalam array\n",data[indexSearch]);  
  } //printf berfungsi untuk menampilkan pada output
  return 0; //nilai kembalinya adalah 0
}
