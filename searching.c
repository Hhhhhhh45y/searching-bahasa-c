#include<stdio.h>

//pembuatan fungsi binaryIteratif
int binaryIteratif(int data[],int n,int cari,int kiri,int kanan){
   
   int mid,index=0;
 
   while(kiri<=kanan){
    mid=(kiri+kanan)/2;
    
   if(cari==data[mid]){      
//if memiliki kondisi yaitu apabila cari sama dengan data mid maka akan dijalankan return mid
      
return mid;  //mengembalikan nilai mid
   }
    
    else if(cari>data[mid]){   
//jika salah salah maka fungsi ini yang dijalankan

     kiri = mid+1;
  }
      
    else{  
     kanan = mid -1;  
  }
    
   }
  return -1;
}

//pendeklarasian variabel
int main(){
  int data[100];
  int n;
  int cari;
  int index;
  int kiri,kanan;
  
//untuk menampilkan apa yang di apit pada tanda petik
  printf("Masukkan banyaknya data : ");
  scanf("%d",&n);
  printf("Masukkan %d angka : ", n);
  for(int i=0;i<n;i++){      //adalah perulangan
     scanf("%d",&data[i]);	//menginput data keyboard
  }
 
 
  printf("Masukkan angka yang ingin dicari: ");
  scanf("%d",&cari);

 //inisialisasi variabel
  kiri=0,kanan=n-1;
  index=binaryIteratif(data,n,cari,kiri,kanan);
  
  if(index==0){
      printf("Data tidak ditemukan.\n");
  }
 
  else{
      printf("Angka %d ditemukan pada index ke %d\n",cari,index);
  }
  
 return 0;    //mengembalikan nilai 0
 }
