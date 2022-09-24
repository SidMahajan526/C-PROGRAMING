#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float percentile;
    char name[100];
}; 
int main (){
    struct student s1;
    s1.roll = 7104;
    s1.percentile = 98;
  //  s1.name = "Om_wani";
  strcpy(s1.name,"om_wani");
  printf("Student Name  :: %s \n ",s1.name);
  printf("Roll number :: %d  \n ",s1.roll);
  printf(" PERCENTILE  :: %f \n ",s1.percentile);
  struct student s2;
  s2.roll = 6104;
  s2.percentile = 99.99;
  strcpy(s2.name,"Mrunal_Mahajan");
    printf("Student Name  :: %s \n ",s2.name);
  printf("Roll number :: %d  \n ",s2.roll);
  printf(" PERCENTILE  :: %f \n ",s2.percentile);
  struct student s3;
  s3.roll = 1974;
  s3.percentile = 12.012;
  strcpy(s3.name,"Siddhesh Mahajan");
  printf("Student Name  :: %s \n ",s3.name);
  printf("Roll number :: %d  \n ",s3.roll);
  printf(" PERCENTILE  :: %f \n ",s3.percentile);
  
  



  


    




    return 0;
}