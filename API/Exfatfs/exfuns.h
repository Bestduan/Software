#ifndef __EXFUNS_H
#define __EXFUNS_H 			   

#include "string.h"
#include "Fat_API.h"
#include "ff.h"
#include "malloc.h"

extern FATFS *fs[2];  
extern FIL *file;	 
extern FIL *ftemp;	 
extern UINT br,bw;
extern FILINFO fileinfo;
extern DIR dir;
extern unsigned char *fatbuf;//SD�����ݻ�����


//f_typetell���ص����Ͷ���
//���ݱ�FILE_TYPE_TBL���.��exfuns.c���涨��
#define T_BIN		0X00	//bin�ļ�
#define T_LRC		0X10	//lrc�ļ�
#define T_NES		0X20	//nes�ļ�
#define T_TEXT		0X30	//.txt�ļ�
#define T_C			0X31	//.c�ļ�
#define T_H			0X32    //.h�ļ�
#define T_FLAC		0X4C	//flac�ļ�
#define T_BMP		0X50	//bmp�ļ�
#define T_JPG		0X51	//jpg�ļ�
#define T_JPEG		0X52	//jpeg�ļ�		 
#define T_GIF		0X53	//gif�ļ�  

 
unsigned char exfuns_init(void);							//�����ڴ�
unsigned char f_typetell(unsigned char *fname);						//ʶ���ļ�����
unsigned char exf_getfree(unsigned char *drv,unsigned long int *total,unsigned long int *free);	//�õ�������������ʣ������
unsigned int  exf_fdsize(unsigned char *fdname);						//�õ��ļ��д�С			 																		   
#endif


