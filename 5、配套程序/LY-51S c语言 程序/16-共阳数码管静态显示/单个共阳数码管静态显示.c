/*-----------------------------------------------
  名称：单个共阳数码管静态显示
  论坛：www.doflye.net
  编写：shifang
  日期：2009.5
  修改：无
  内容：通过赋值给P1，让数码管显示特定的字符或者数字
------------------------------------------------*/
#include<reg52.h> //包含头文件，一般情况不需要改动，
//头文件包含特殊功能寄存器的定义


void main (void)
{
 P1=0x00;   //二进制 为 1100 0000  参考数码管排列，
//可以得出0对应的段点亮，1对应的段熄灭，结果显示数字"0"   
 while(1)
 {

 }
}
