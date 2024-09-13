#ifndef DR_H
#define DR_H

#define DR_START() __asm__ volatile("movl $0x1ceb00da, %%eax" : : : "eax")
#define DR_END() __asm__ volatile("movl $0xbabecafe, %%eax" : : : "eax")

#endif