int     cases(char d)
{
    if (d == 'I')
        return (1);
    else if (d == 'V')
            return (5);
    else if (d == 'X')
            return (10);
    else if(d == 'L')
            return (50);
    else if(d == 'C')
            return (100);
    else if(d == 'D')
            return (500);
    else if (d == 'M')
            return(1000);
    else
        return (0);
}

int romanToInt(char * s){
    int i;
    int result;
    int num;
    
    i = 0;
    result = 0;
    while(s[i])
    {
        num = cases(s[i]);
        if(num < cases(s[i + 1]))
            result -= num;
        else
            result +=num; 
        i++;
    }
    return (result);
}
