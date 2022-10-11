#include<iostream>
using namespace std;
int numberOfMoves(int kx, int ky, int rx1, int ry1, int rx2, int ry2) {
   int count = 0;  
   int dx[] = {1, 1, -1, -1, 0, 1, 0, -1};   
   int dy[] = {1, -1, 1, -1, 1, 0, -1, 0};
   for (int i = 0; i < 8; i++) {
       int currentX = kx + dx[i];
       int currentY = ky + dy[i]; 
       if (currentX >= 0 && currentX <= 7 && currentY >= 0 && currentY <= 7) {
           if (currentX != rx1 && currentX != rx2 && currentY!= ry1 && currentY != ry2) {
                 count++;
           }
       }
   }
   return count;

    
    
}

int main()
{
    cout<<numberOfMoves(2, 2, 1, 2, 5, 6);
    return 0;
}