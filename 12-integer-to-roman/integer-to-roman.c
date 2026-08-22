
char* intToRoman(int num) 
{
    int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
char*symbol[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
static char res[20];
int k=0;
    for(int i=0;i<13;i++)
    {
        while(num>=value[i])
        {
            res[k]=symbol[i][0];
            k++;
            if(symbol[i][1]!='\0')
            {
                res[k]=symbol[i][1];
                k++;
            }
            num=num-value[i];
        }
    }
    res[k]='\0';
    return res;
}
