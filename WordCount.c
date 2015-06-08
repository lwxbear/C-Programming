/**
本程序用于统计行数，单词数与字符串数。
这里对单词的定义比较宽松，它是任何其中不包含空格，制表符或换行符的字符序列。
作者：林武雄
时间:
Mon Jun  8 16:32:12 CST 2015
**/

#include <stdio.h>

#define IN 0       /*在单词内*/
#define OUT 1      /*在单词外*/

int main()
{
        int c, nl, nc, nw, state;
        state = OUT;
        nl = nc = nw = 0;
        while ((c = getchar()) != EOF)
        {
                ++nc;
                if(c == '\n')
                {
                        ++nl;
                }
                if (c == '\n' || c == '\t' || c == ' ')
                {
                        state = OUT;
                }
                else if (state == OUT)
                {
                        state = IN;
                        ++nw;
                }
        }
        printf("nc:%d, nl:%d, nw:%d", nc, nl, nw);
        return 0;
}

