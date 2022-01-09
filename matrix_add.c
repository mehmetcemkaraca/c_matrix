#include<stdio.h>
int main()
{
int Arrayone[2][3]={{1,2,3},
                    {4,5,6}}; 

int Arraytwo[2][3]={{7,8,9},
                   {1,2,3}}; 

int total[2][3]; 

for(int i =0;i<2;i++) 
{
for(int b=0;b<3;b++) 
{
total[i][b]=Arrayone[i][b]+Arraytwo[i][b]; 

}

}




for(int a =0;a<2;a++) 
{
for(int c=0;c<3;c++) 
{
printf("%d",toplam[a][c]);

}
printf("\n");
}


}
