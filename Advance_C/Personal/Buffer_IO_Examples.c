#if 0
#include <stdio.h>
#include <unistd.h>

int main()
{
    int i = 10;
    while (i--)
    {
        printf ("Countdown: %d ", i);   //All the statements from the printf() will be accumulated in the O/P Buffer till the loop is running.
        sleep (1);  //Allows you to wait for just a current thread for a set amount of time. The sleep() function will sleep the present executable for the time specified by the thread.
    }
    return 0;   //As soon as the main() ends, all the statements in the O/P buffer are flushed out on to the Console in one go.
//If you terminate the program abnormally using Ctrl+C; the code prints nothing as the buffer is not flushed out in case of abnormal termination.
}
#endif

#if 0
#include <stdio.h>
#include <unistd.h>

int main()
{
    int i = 10;
    while (i--)
    {
        printf ("Countdown: %d\n", i);   //All the statements are directly displayed on the console. The '\n' causes the O/P Buffer to flush immediately without waiting for the program to terminate.
        sleep (1);  //Allows you to wait for 1 second before printing the next statement.
    }
    return 0;
//If you terminate the program abnormally using Ctrl+C; the code will stop printing. But the previously printed statements will be present as it is.
}
#endif

#if 0
#include <stdio.h>
#include <unistd.h>

int main()
{
    int i = 10;
    char ch;
    while (i--)
    {
        printf("Countdown: %d ", i);    //The statement is pushed to the O/P buffer.
        ch = getchar ();    //If there is an input statement that actually reads data from the file (here stdin), the O/P Buffer is flushed out to screen. And then the input is taken.
        sleep (1);
    }
/*Countdown: 9 a(\n) [After 2 seconds, the next line gets printed]
Countdown: 8 Countdown: 7 abc(\n) [After 4 seconds, the next line gets printed]
Countdown: 6 Countdown: 5 Countdown: 4 Countdown: 3 +-(\n) [After 3 seconds, the next line gets printed]
Countdown: 2 Countdown: 1 Countdown: 0 (\n) [After 1 second, the program terminates]
*/
//Explanation:
/*Since, the I/P Buffer is empty initially, the getchar() has to fetch the data from stdin i.e. Keyboard. So, the statement in O/P Buffer (i=9) is flushed out before the user is asked for input.
The input here is 2 different characters i.e. 'a' and '\n'. The 'a' is stored in the 'ch' in the first iteration leaving the '\n' in the I/P Buffer.
So, for the 2nd iteration, the getchar() fetches data from the I/P Buffer that contains '\n' and stores the statement (i=8) in O/P Buffer.
In the 3rd iteration, the statement (i=7) is stored in the O/P Buffer. But the I/P Buffer is empty, so getchar() has to fetch data from stdin. Hence, 2 statements from O/P Buffer are flushed out.
From (i=9) to (i=7), the sleep(1) is encountered 2 times; so there is a 2 sec delay between the printing of the 2 lines.
*/
    return 0;
}
#endif

#if 0
#include <stdio.h>
#include <unistd.h>

int main()
{
    int i = 10;
    while (i--)
    {
        printf ("Countdown: %d ", i);   //The statement is pushed to the O/P buffer.
        fflush (stdout);    //The C Library function flushes the O/P Buffer of a stream. This function returns a 0 on success. If an error occurs, EOF is returned and the error indicator is set.
        sleep(1);
    }
    return 0;
//Countdown: 9 Countdown: 8 Countdown: 7 Countdown: 6 Countdown: 5 Countdown: 4 Countdown: 3 Countdown: 2 Countdown: 1 Countdown: 0 
//The statement stored in O/P Buffer is flushed out by fflush(). Then, there is a delay of 1 sec caused by the sleep(1) statement. Then the next set of statement follows the same cycle.
}
#endif

#if 0
#include <stdio.h>
#include <unistd.h>

int main()
{
    int i = 1;
    while (1)
    {
        printf("Countdown: %d ", i++);  //The statement is pushed to the O/P Buffer.
        usleep (5000);
    }
    return 0;
//All the statements from a certain number of iterations are stored in the O/P Buffer. When there is no more space left in the O/P Buffer; the complete Buffer is flushed out automatically.
//The flushing causes all the statements stored in the O/P Buffer to be displayed on the console at once. Also, the number of times the usleep() is encountered, that much delay is given.
}
#endif
