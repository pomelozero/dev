#include "md5.h" 
#include <string>
  
int main(int argc, char *argv[])  
{  
    MD5_CTX md5;  
    MD5Init(&md5);           
    int i;  
    unsigned char encrypt[] ="admin";//21232f297a57a5a743894a0e4a801fc3  
    unsigned char decrypt[16];      
    MD5Update(&md5,encrypt,strlen((char *)encrypt));  
    MD5Final(&md5,decrypt);   
    printf("����ǰ:%s\n���ܺ�16λ:",encrypt);  
    for(i=4;i<12;i++)  
    {  
        printf("%02x",decrypt[i]);  //02xǰ��Ҫ���� %  
    }  
       
    printf("\n����ǰ:%s\n���ܺ�32λ:",encrypt);  
    for(i=0;i<16;i++)  
    {  
        printf("%02x",decrypt[i]);  //02xǰ��Ҫ���� %  
    }  
  
    getchar();  
  
    return 0;  
}  