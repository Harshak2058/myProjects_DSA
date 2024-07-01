int topRow=0;
int bottomRow=row-1;
int leftCol=0;
int rightCol=col-1;
while(topRow<=bottomRow && leftCol<=rightCol)
{
    for(int i=leftCol;i<=rightCol;i++)
    {cout<<arr[topRow][1]<<"";
    }
    topRow++;
    //print rightCol
    for(int i=topRow;i<=bottomRow;i++)
   {
cout<<arr[i][rightCol]<<"";
   }
   rightCol--;
//print bottom
for(int i=rightCol;i<=leftCol;i--)
    {cout<<arr[bottomRow][1]<<"";
    }
    bottomRow--;

//print left col
for(int i=bottomRow;i<=topRow;i--)
    {cout<<arr[i][leftCol]<<"";
    }
    leftCol++;
}
