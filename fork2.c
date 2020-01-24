//The vfork() function creates a new process as does fork(), except that the child process shares the same address space as the calling process. Execution of the calling process is blocked until the child process calls one of the exec() family of functions, or calls _exit(). Because parent and child share the address space, you must not return from the function that called vfork(); doing so can corrupt the parent's stack.You should use vfork() when your child process simply modifies the process state and then calls one of the exec() functions. Because of the shared address space, you must avoid doing anything in the child that impacts the parent when it resumes execution. For example, if your exec() call fails, you must call _exit(), and not exit(), because calling exit() would close standard I/O stream buffers for the parent as well as the child. 

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
pid_t process;
int x=1;
process=vfork();
if(process==0)
{
printf("child process,id=%d,x=%d\n",process,++x);
}
else
{
printf("parent process,id=%d,x=%d\n",process,--x);
}
printf("%d",x);
exit(0);
}
