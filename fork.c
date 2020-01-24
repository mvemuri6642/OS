//fork() creates a new process by duplicating the calling process.  The new process is referred to as the child process.  The calling process is referred to as the parent process.The child process and the parent process run in separate memory spaces.  At the time of fork() both memory spaces have the same content.  Memory writes, file mappings (mmap(2)), and unmappings (munmap(2)) performed by one of the processes do not affect the other.The child process is an exact duplicate of the parent process except for the following points:

     /* **The child has its own unique process ID, and this PID does not
          match the ID of any existing process group (setpgid(2)) or
          session. */


#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
//fork() pid
/*void main(int a,char *b[])
{
pid_t pid;
pid=fork();
if(pid<0)
{
printf("fork error");
exit(1);
}
if(pid!=0)
{
printf("parent is %d and child is %d\n",getpid(),pid);
}
else
{
printf("child is %d,parent is %d\n",getpid(),getpid());
}
} */

//fork()
/*int main()
{
int a=50;
pid_t process;
process = fork();
if(process==0)
{
printf("2.child process\n");
}
else
{
printf("1.parent process\n");
}
}*/



//vfork()

//The vfork() function creates a new process as does fork(), except that the child process shares the same address space as the calling process. Execution of the calling process is blocked until the child process calls one of the exec() family of functions, or calls _exit(). Because parent and child share the address space, you must not return from the function that called vfork(); doing so can corrupt the parent's stack.You should use vfork() when your child process simply modifies the process state and then calls one of the exec() functions. Because of the shared address space, you must avoid doing anything in the child that impacts the parent when it resumes execution. For example, if your exec() call fails, you must call _exit(), and not exit(), because calling exit() would close standard I/O stream buffers for the parent as well as the child. 

/*int main()
{
int a=50;
pid_t process;
process = vfork();
if(process==0)
{
printf("2.child process\n");
}
else
{
printf("1.parent process\n");
}
}
*/



//wait() 
//A call to wait() blocks the calling process until one of its child processes exits or a signal is received. After child process terminates, parent continues its execution after wait system call instruction.
int main()
{
int a=50;
pid_t process;
process = fork();
if(process==0)
{
printf("2.child process\n");
}
else
{
printf("1.parent process\n");
wait(NULL); //parent process execution has been terminated and child process is 	      being executed
printf("child process terminated");
}
}

