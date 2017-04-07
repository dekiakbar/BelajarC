int main(){
int i,j,n,y[9],x[3][3]={{1,3,5},{2,4,7},{9,10,11}};
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    n=i*3+j;
    y[n]=x[i][j];}}
    for(i=0;i<9;i++){
    printf("%d ",y[i]);}
    getch();}
