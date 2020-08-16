const int* array_sort(int* inp,int l)
{
    int temp = 0;
    for(int i=0;i<l;i++)
    {
        for(int j =0;j<(l-i-1);j++)
        {
           if (inp[j] > inp[j + 1])
           {
              temp = inp[j];
              inp[j] = inp[j + 1];
              inp[j + 1] = temp;
           }
        }
    }
    return inp;
}
