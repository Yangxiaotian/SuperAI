#include<stdio.h>
byte *CORE_BRAIN(byte *input)
{
    if(input==NULL) return NULL;
    /**
     * 00开头定义视觉，像两个眼睛
     * 01开头定义听觉
     * 10开头定义嗅觉
     * 11开头定义触觉
     */
    if(byte[0] & 0xc0 == 0x00) // 视觉 
    {
	    // TO-DO
    }else if(byte[0] & 0xc0 == 0x40) { // 听觉
            // TO-DO
    }else if(byte[0] & 0xc0 == 0x80) { // 嗅觉
	    // TO-DO
    }else if(byte[0] & 0xc0 == 0xc0) { // 触觉
	    // TO-DO
    }

}
int main(void)
{
	printf("Hello World\n");
	return 0;
}
