
int min_num(int a, int b)
{
    if (a < b)
       return (a);
    return (b);
}

int max_num(int a, int b)
{
    if (a > b)
        return (a);
    return (b);
}


int maxArea(int* height, int heightSize)
{
    int i;
    int j;
    int curr_container;
    int result;
    
    i = 0;
    j = heightSize - 1;
    curr_container = 0;
    result = 0;  
    while (i < j)
    {       
            curr_container = min_num(height[i], height[j]) * (j - i);
            result = max_num(result, curr_container);    
            if (height[i] < height[j])
                    i++;
            else
                j--;
    }
    return(result);
}

// int maxArea(int* height, int heightSize)
// {
//     int i;
//     int j;
//     int curr_container;
//     int result;
    
//     i = 0;
//     j = 0;
//     curr_container = 0;
//     result = 0;  
//     while (i < heightSize)
//     {
//         j = i + 1;
//         while (j < heightSize)
//         {
//             curr_container = min_num(height[i], height[j]) * (j - i);
//             result = max_num(result, curr_container);    
//             j++;
//         }
//         i++;
//     }
//     return (result);
// }


