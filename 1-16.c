/*
 * while (there's another line)
 *      if (it's longer than the previous longest)
 *              (save it)
 *              (save its length)
 *      print longest line
 */

#include <stdio.h>
#define MAXLINE 1000    /*maximum input line length*/

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/*print the longest input line*/

int main()
{
        int len;        /*current line length*/
        int max;        /*maximum length seen so far*/
        char line[MAXLINE]; /*current input line*/
        char longest[MAXLINE]; /*longest line saved here*/

        max = 0;
        while ((len = get_line(line, MAXLINE)) > 0)
                if (len > max) {
                        max = len;
                        copy(longest, line);
                }
        if (max > 0) /*[if] there was a line*/
                printf("%s %d \n", longest, max);
        return 0;
}

/*getline: read a line into s, return length*/
int get_line(char s[], int lim)
{
        int c, i;

        for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
                s[i] = c;
        if (c == '\n') {
                s[i] = c;
                ++i;
        }
        s[i] = '\0'; /*null character, whose value is 0, is placed at the end of the array created to mark the end of the st
ring of characters*/
        return i;
}

/*copy: copy 'from' into 'to'; assume to is big enough*/
void copy(char to[], char from[])
{
        int i;

        i = 0;
        while ((to[i] = from[i]) != '\0')
                ++i;
}

