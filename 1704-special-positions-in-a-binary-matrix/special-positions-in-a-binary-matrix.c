int numSpecial(int** mat, int matSize, int* matColSize) {
    int m=matSize;
    int n=matColSize[0];
    int row[m],col[n],spl=0;
    for(int i=0;i<m;i++)
    {
        row[i]=0;
    }
    for(int j=0;j<n;j++)
    {
        col[j]=0;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==1)
            {
                row[i]++;
                col[j]++;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==1&&row[i]==1&&col[j]==1)
            {
                spl++;
            }
        }
    }
    return spl;
}