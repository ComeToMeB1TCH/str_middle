char itc_sameChar(string str) 
{
    long times = 0;
    long times2 = 0;
    char ch1 = str[times];
    char ch2 = str[times2];
    while (ch1 != '\0') {
        ch1 = str[times];
        while (ch2 != '\0') {
            ch2 = str[times2];
            if (times != times2 && ch1 == ch2)
                return ch1;
            times2++;
        }
        times++;
    }
    return ch1;
}
