void selectionsort(int values[],int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        int menor = i;
        for(int j = i + 1; j < n; j++)
        {
            if(values[j]<values[menor])
            {
                menor = j;
            }
        }
        if(menor != i)
        {
            int hold = values[menor];
            values[menor]=values[i];
            values[i]=hold;
        }
    }

}
